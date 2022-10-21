#include "bt.h"
#include <stdio.h>
#include<string.h>
int main(){
    printf("Welcome! Please, enter proper command or type \"help\" to view help:\n");
    tree k;
    int flag=0;
    while (1){
        char a[100]="";
        scanf("%s",a);
        if (!EOF_HELPER()){
            return 0;
        }
        if (strcmp(a,"quit")==0){
            printf("Quitting the program...\n");
            if (flag==1){
                destroy(k);
            }
            return 0;
        }
        else if (strcmp(a,"build")==0){
            if (flag==1){ 
                printf("The tree had been already built!\n");
            }
            else{
                k=create_empty();
                flag=1;
                printf("A new tree was built!\n");
            }
        }
        else if (strcmp(a,"add")==0){
            if (flag==1){
                char c[100]="";
                scanf("%s",c);
                cpu d;
                if (get_value(&d,c)!=false){
                    k=bin_search_tree_add(k,d);
                    if (k!=NULL){
                        printf("Successfully added element %s\n", c);
                    }
                    else{
                        printf("Some kind of error occured!\n");
                    }
                }
                else{
                    printf("You cannot use this element in the tree!\n");
                }
            }
            else{
                printf("No tree to add to!\n");
                while(getchar()!='\n'){
                }
            }
        }
        else if (strcmp(a,"check")==0){
            if (flag==1 && !is_empty(k)){
                int chk_flag=0, prev_level=0, cur_level=0;
                check(k,0,&chk_flag,&prev_level,&cur_level);
                if (chk_flag==1){
                    printf("All leaves ARE NOT on the same level :(\n");
                }
                else{
                    printf("All leaves ARE on the same level :)\n");
                }
            }  
            else{
                printf("No tree to check or the tree is empty!\n");
            }
        }
        else if (strcmp(a,"rem")==0){
            if (flag==1){
                char c[100]="";
                scanf("%s",c);
                cpu d;
                if (get_value(&d,c)!=false){
                    tree_node **g=find_element(&k,d);
                    if (g==NULL){
                        printf("Error, this element is missing in the tree!\n");
                    }
                    else{
                        bin_search_tree_remove(g);
                        printf("Successfully removed element %s\n", c);
                    }
                }
                else{
                    printf("You cannot use this element in the tree!\n");
                }   
            }
            else{
                printf("No tree to delete from!\n");
                while(getchar()!='\n'){
                }
            }
            
        }
        else if (strcmp(a, "print")==0){
            if (flag==1){
                printf("\n");
                print_elements(k,0);
            }
            else{
                printf("No tree to print!\n");
            }
        }
        else if (strcmp(a,"help")==0){
            printf("A brief help of the BTTrainer program:\n");
            printf("How to use: just type supported command and the result of it will be shown on a screen\n");
            printf("In case of mistyped command, the error will be shown. All of the left input will be ignored\n");
            printf("Correct command list:\n"); 
            printf("    help - show help\n");
            printf("    build - build a new empty tree\n");
            printf("    dstr - destroy the existing tree\n");
            printf("    add VAL - add to the tree VAL value, where VAL is one of the supported values\n");
            printf("    rem VAL - delete from the tree VAL value, where VAL is on the supported values\n");
            printf("    print - print elements of the existing tree\n");
            printf("    check - check the tree for the all leaves being on the same level\n");
            printf("    quit - quit this program\n");
            printf("List of supported values:\n");
            for (int i=FIRST_PROC; i<=LAST_PROC; i++){
                printf("%s",get_text(i));
                if (i!=LAST_PROC){
                    printf(", ");
                }
            }
            printf("\n");
            printf("Made by Denis Ustinov, MAI (NRU) 2022\n");
        }
        else if (strcmp(a,"dstr")==0){
            if (flag!=0){
                destroy(k);
                flag=0;
                printf("Successfully destroyed the tree!\n");
            }
            else{
                printf("No tree to destroy!\n");
            }
        }
        else{
            printf("Unknown command %s! Please reenter the command properly!\n", a);
            while(getchar()!='\n'){
            }
        }
    }
}