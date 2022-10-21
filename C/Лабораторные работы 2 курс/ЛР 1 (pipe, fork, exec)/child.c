#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "fcntl.h"
#include "string.h"
int main(int argc, char* argv[]){
    int re, file1,out_code=0, flag,state; char res[4]={0};
    while(1){
        flag=0;
        state=read(STDIN_FILENO,&re,sizeof(re));
        if (state==-1){
            printf("Error reading a pipe 1!\n");
            exit(-5);
        }
        else if (state==0){
            exit(0);
        }
        for(int i=2;i<=re/2;i++){    
            if(re%i==0){    
                flag=1;    
                break;    
            }
        }
        if (re<=0 || flag==0){
            out_code=2;
            if (write(STDOUT_FILENO,&out_code,sizeof(out_code))==-1){
                printf("Error writing to STDOUT (pipe 2)!\n");
                exit(-4);
            }
        }
        else{
            if (write(STDOUT_FILENO,&out_code,sizeof(out_code))==-1){
                printf("Error writing to STDOUT (pipe 2)!\n");
                exit(-4);
            }
            if (!(file1 = open(argv[1], O_WRONLY | O_APPEND | O_CREAT, 0644))){
                printf("Error opening a file %s!\n", argv[1]);
                exit(-1);
            }
            sprintf(res,"%d\n",re);
            if (write(file1, &res, strlen(res))==-1){
                printf("Error writing to file!\n");
                exit(-10);
            }
            close(file1);
        }
    }
}

