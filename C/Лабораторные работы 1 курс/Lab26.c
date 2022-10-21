#include<stdio.h>
#include"deque_malloc.h"
void merge(queue_dbl *qa, queue_dbl *qb, queue_dbl *out){
    double a,b;
    while (!qdbl_is_empty(qa)&& !qdbl_is_empty(qb)){
        a=qdbl_peek_front(qa);
        b=qdbl_peek_front(qb);
        if (a>b){
            qdbl_push_back(out,b);
            qdbl_pop_front(qb);
        }
        else{
            qdbl_push_back(out,a);
            qdbl_pop_front(qa);
        }
    }
    while (!qdbl_is_empty(qa)){
        qdbl_push_back(out,qdbl_pop_front(qa));
    }
    while (!qdbl_is_empty(qb)){
        qdbl_push_back(out,qdbl_pop_front(qb));
    }
}
void sortQueue(queue_dbl *q){
    if (qdbl_is_empty(q)){
        return;
    }
    else if (q->size==1){
        qdbl_push_front(q,qdbl_pop_front(q));
        return;
    }
    else{
        queue_dbl qa;
        queue_dbl qb;
        qdbl_init(&qa);
        qdbl_init(&qb);
        int i=0;
        while (!qdbl_is_empty(q)){
            if (i%2==1){
                qdbl_push_front(&qa, qdbl_pop_front(q));
            }
            else{
                qdbl_push_front(&qb, qdbl_pop_front(q));
            }
            i++;
        }
        sortQueue(&qa);
        sortQueue(&qb);
        merge(&qa,&qb,q);
        qdbl_destroy(&qa);
        qdbl_destroy(&qb);
    }
}
int main(){
    queue_dbl input;
    qdbl_init(&input);
    int c;
    while(1){
        c=getchar();
        if (c==' ' || c=='\t'){
            continue;
        }
        else if (c=='\n' || c==EOF){
            break;
        }
        else{
            ungetc(c,stdin);
            double el;
            if (scanf("%lf",&el)==1){
                qdbl_push_front(&input,el);
            }
            else{
                printf("Error in input!");
                break;
            }
        }
    }
    sortQueue(&input);
    double el;
    while(!qdbl_is_empty(&input)){
        el=qdbl_pop_front(&input);
        printf("%lf ",el);
    }
    printf("\n");
    return 0;
}