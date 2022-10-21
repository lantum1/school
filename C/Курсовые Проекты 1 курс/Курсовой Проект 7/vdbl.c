#include<stdlib.h>
#include "vdbl.h"
bool vdbl_init(vector_dbl *v, size_t size){
    v->size=size;
    v->buf=malloc(size*sizeof(double));
    if (v->buf==NULL){
        v->size=0;
        return false;
    }
    for (size_t i=0; i<size; i++){
        v->buf[i]=0;
    }
    return true;
}

void vdbl_destroy(vector_dbl *v){
    free(v->buf);
    v->buf=NULL;
    v->size=0;
}

size_t vdbl_get_size(vector_dbl *v){
    return v->size;
}

bool vdbl_set_size(vector_dbl *v, size_t newsize){
    double *buf_temp = realloc(v->buf,newsize*sizeof(double));
    if (buf_temp!=NULL){
        v->buf=buf_temp;
        for (size_t i=(v->size)+1; i<newsize; i++){
            v->buf[i]=0;
        }
        v->size=newsize;
        return true;
    }
    return false;
}

double vdbl_get(vector_dbl *v, size_t i){
    return v->buf[i];
}

bool vdbl_set(vector_dbl *v, size_t i, double newval){
    if (i>=v->size && false==vdbl_set_size(v,i+1)){
        return false;
    }
    v->buf[i]=newval;
    return true;
}

bool vdbl_push(vector_dbl *v, double newval){
    if (false==vdbl_set_size(v,(v->size)+1)){
        return false;
    }
    v->buf[(v->size)-1]=newval;
    return true;
}

void vdbl_pop(vector_dbl *v){
    vdbl_set_size(v,(v->size)-1);
}