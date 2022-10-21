#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"bt.h"
tree create_empty(){
    return NULL;
}
tree build(tree left, tree right, double root_val){
    tree t=malloc(sizeof(tree_node));
    t->val=root_val;
    t->left=left;
    t->right=right;
    return t;
}
bool is_empty(tree t){
    return t==NULL;
}
double get_root_val(tree t){
    return t->val;
}
tree get_left(tree t){
    return t->left;
}
tree get_right(tree t){
    return t->right;
}
void destroy(tree t){
    free(t);
}
void destroy_r(tree t){
    while(!is_empty(t)){
        if (t->left!=NULL){
            destroy_r(t->left);
        }
        if (t->right!=NULL){
            destroy_r(t->right);
        }
        if (t->left==NULL && t->right==NULL){
            destroy(t);
        }
    }
}
tree change_root_val(tree t, double new_val){
    tree left=get_left(t);
    tree right=get_right(t);
    destroy(t);
    tree res=build(left,right,new_val);
    return res;
}
tree bin_search_tree_add(tree t, double val){
    if (is_empty(t)){
        return build(create_empty(), create_empty(),val);
    }
    else if (val<get_root_val(t)){
        tree new_left=bin_search_tree_add(get_left(t),val);
        tree res=build(new_left, get_right(t),get_root_val(t));
        destroy(t);
        return res;
    }
    else if (val>get_root_val(t)){
        tree new_right=bin_search_tree_add(get_right(t),val);
        tree res=build(get_left(t),new_right, get_root_val(t));
        destroy(t);
        return res;
    }
    else{
        return t;
    }
}
tree_node ** find_element(tree_node **t, double val){
    if (*t==NULL){
        return NULL;
    }
    else if (val==(*t)->val){
        return t;
    }
    else if (val<(*t)->val){
        return find_element(&(*t)->left,val);
    }else{
        return find_element(&(*t)->right,val);
    }
}

void bin_search_tree_remove(tree_node **t){
    if ((*t)->left ==NULL && (*t)->right==NULL){
        free(*t);
        *t=NULL;
    }
    else if ((*t)->right==NULL){
        tree_node *child =(*t)->left;
        free(*t);
        *t=child;
    }
    else if ((*t)->left==NULL){
        tree_node *child=(*t)->right;
        free(*t);
        *t=child;
    }
    else{
        tree_node ** maxleft=&(*t)->left;
        while((*maxleft)->right!=NULL){
            maxleft=&(*maxleft)->right;
        }
        tree_node *tmp =*maxleft;
        *maxleft=(*maxleft)->left;
        tmp->left = (*t)->left;
        tmp->right=(*t)->right;
        free(*t);
        *t=tmp;
    }
}
void print_elements(tree t,int k){
    if (t==NULL){
        return;
    }
    print_elements(t->right,k+1);
    for (int i=0; i<k; i++){
        printf(" ");
    }
    printf("%lf\n",t->val);
    print_elements(t->left,k+1);
}
void check(tree t,int k,int *chk_flag,int *prev_level, int *cur_level){
    if (t->left==NULL && t->right==NULL){
        *cur_level=k; 
    }
    if (*prev_level==0){
        *prev_level=*cur_level;
    }
    if (*cur_level!=*prev_level){
        *chk_flag=1;
    }
    if (t->right!=NULL){
        check(t->right,k+1,chk_flag,prev_level,cur_level);
    }
    if (t->left!=NULL){
        check(t->left,k+1,chk_flag,prev_level,cur_level);
    }
}
bool get_value(cpu *a,char *s){
    if (strcmp("i086",s)==0){
        *a=i086;
    }
    else if (strcmp("i286",s)==0){
        *a=i286;
    }
    else if (strcmp("i386",s)==0){
        *a=i386;
    }
    else if (strcmp("i486",s)==0){
        *a=i486;
    }
    else if (strcmp("pentium1",s)==0){
        *a=pentium1;
    }
    else if (strcmp("pentium1pro",s)==0){
        *a=pentium1pro;
    }
    else if (strcmp("pentium2",s)==0){
        *a=pentium2;
    }
    else if (strcmp("pentium3",s)==0){
        *a=pentium3;
    }
    else if (strcmp("pentium4",s)==0){
        *a=pentium4;
    }
    else if (strcmp("pentium4ht",s)==0){
        *a=pentium4ht;
    }
    else if (strcmp("coresolo",s)==0){
        *a=coresolo;
    }
    else if (strcmp("coreduo",s)==0){
        *a=coreduo;
    }
    else if (strcmp("core2solo",s)==0){
        *a=core2solo;
    }
    else if (strcmp("core2duo",s)==0){
        *a=core2duo;
    }
    else if (strcmp("core2quad",s)==0){
        *a=core2quad;
    }
    else if (strcmp("pentium3s",s)==0){
        *a=pentium3s;
    }
    else{
        return false;
    }
    return true;
}
char* get_text(cpu val){
    if (val==i086){
        return "i086";
    }
    else if (val==i286){
        return "i286";
    }
    else if (val==i386){
        return "i386";
    }
    else if (val==i486){
        return "i486";
    }
    else if (val==pentium1){
        return "pentium1";
    }
    else if (val==pentium1pro){
        return "pentium1pro";
    }
    else if (val==pentium2){
        return "pentium2";
    }
    else if (val==pentium3){
        return "pentium3";
    }
    else if (val==pentium3s){
        return "pentium3s";
    }
    else if (val==pentium4){
        return "pentium4";
    }
    else if (val==pentium4ht){
        return "pentium4ht";
    }
    else if (val==coresolo){
        return "coresolo";
    }
    else if (val==coreduo){
        return "coreduo";
    }
    else if (val==core2solo){
        return "core2solo";
    }
    else if (val==core2duo){
        return "core2duo";
    }
    else if (val==core2quad){
        return "core2quad";
    }
    return NULL;
}
int EOF_HELPER() {
    if (feof(stdin)){
        return 0;
    }
    int c = getc(stdin);
    if (c == EOF){
        return 0;
    }
    ungetc(c, stdin);
    return 1;
}