#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
#include "string.h"
int Check(){
    int i=0,l=0,m=0,c,s=-2,h=-1;
    while ((c=getchar())!='\n'&& c!=EOF){
        if (c>='0' && c<='9' && s!=-1){
            if (s==1){
                continue;
            }
            s=0;
            if(h!='-'){
                if(m<=9){
                    if (m==9){
                        if (l%10<=4 && l<=214748364){
                            l=l*10;
                            m++; 
                        }
                        else{
                            printf("Invalid number!\n");
                            exit(-30);
                        }
                    }
                    else{
                        l=l*10;
                        m++;
                    }
                }
                else {
                    printf("Invalid number!\n");
                    exit(-30);
                }
                if (l==2147483640){
                    if (c<='7'){
                        l=(c-'0')+l;
                    }
                    else{ 
                        printf("Invalid number!\n");
                        exit(-30);
                    }
                }
                else{
                    l=(c-'0')+l;
                }
            }
            else{
                if(m<=9){
                    if (m==9){
                        if (l%10>=-4 && l>=-214748364){
                            l=l*10;
                            m++; 
                        }
                        else{
                            printf("Invalid number!\n");
                            exit(-30);
                        }
                    }
                    else{
                        l=l*10;
                        m++;
                    }
                }
                else {
                    printf("Invalid number!\n");
                    exit(-30);
                }
                if (l==-2147483640){
                    if (c<='8'){
                        l=l-(c-'0');
                    }
                    else{ 
                        printf("Invalid number!\n");
                        exit(-30);
                    }
                }
                else{
                    l=l-(c-'0');
                }
                
            }
        }
        else if((c=='+' || c=='-') && (h==-1)){
            l=0;
            m=0;
            h=c;
        }
    }
    
    if (s==0){
        return l;
    }
    else{
        printf("Invalid number!\n");
        exit(-30);
    }
}
int main(){
    int userInput, fd1[2], fd2[2], child_read, state, nameLength=0,c,FileName[256]={0};
    while ((c=getchar())!='\n' && c!=EOF){
        if (nameLength<255){
            strncat(FileName,&c,1);
            nameLength++;
        }
        else{
            nameLength++;
        }
    }
    if (nameLength==0 || nameLength>255){
        printf("Sorry, you entered invalid filename!\n");
        exit(-15);
    }
    if (pipe(fd1)==-1){
        printf("Error creating pipe 1!\n");
        exit(-2);
    }  
    if (pipe(fd2)==-1){
        printf("Error creating pipe 2!\n");
        exit(-2);
    }
    state=fork();
    if (state<0){
        printf("Error forking a proccess!\n");
        exit(-3);
    }
    else if (state>0){
        while ((c=getchar())!=EOF){
            ungetc(c, stdin);
            userInput=Check();
            if (write(fd1[1], &userInput,sizeof(userInput))==-1){
                printf("Error writing to a pipe 1!\n");
                exit(-4);
            }
            if (read(fd2[0],&child_read,sizeof(child_read))==-1){
                printf("Error reading a pipe 2!\n");
                exit(-5);
            }
            if (child_read==2){
                exit(0);
            }
        }
        if (close(fd2[0])==-1){
            printf("Error closing a pipe 2 (read)!\n");
            exit(-7);
        }
        if (close(fd1[1])==-1){
            printf("Error closing a pipe 1 (write)!\n");
            exit(-7);
        }
        if (close(fd2[1])==-1){
            printf("Error closing a pipe 2 (write)!\n");
            exit(-7);
        }
        if (close(fd1[0])==-1){
            printf("Error closing a pipe 1 (read)!\n");
            exit(-7);
        }
    }
    else{
        if (dup2(fd1[0], STDIN_FILENO) == -1)
            printf("Error of dup2 pipe 1 read");
        if (dup2(fd2[1], STDOUT_FILENO) == -1)
            printf("Error of dup2 pipe 2 write");
        if (close(fd1[1])==-1){
            printf("Error closing a pipe 1 (read)!\n");
            exit(-7);
        }
        if (close(fd2[0])==-1){
            printf("Error closing a pipe 2 (write)!\n");
            exit(-7);
        }
        if (execl("./child.out","./child.out",FileName,(char*)NULL)==-1){
            printf("Error executing another program!\n");
            exit(-6);
        }
    }
}