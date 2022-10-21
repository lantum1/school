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
