#include<stdio.h>
typedef unsigned int set;
int lti(int c){
    if (c>='a' && c<='z'){
        return c-'a';
    }
    else if (c>='A' && c<='Z'){
        return c-'A';
    }
    else{
        return -1;
    }
}
set lts(int c){
    int idx=lti(c);
    if (idx==-1){
        return 0;
    }
    return ((set)1)<<idx;
}
int main(){
    int c,s=-1;
    set k=lts('s')|lts('j')|lts('z'),t=0,h=0;
    set bk=lts('a')|lts('e')|lts('i')|lts('o')|lts('u')|lts('y');
    do{
        c=getchar();
        if (c!=' ' && c!='\n' && c!='\t' && c!=',' && c!=EOF){
            if ((c>='a' && c<='z') || (c>='A' && c<='Z')){
                s=1;
                t=0;
                if ((lts(c)|bk)!=bk) {
                    t=lts(c);
                }
                h=h|t;
            }
        }
        else {
            if (s==1){
                if ((h|k)<=k && h!=0){
                    printf("%s","EST'");
                    s=0;
                    break;
                }
            }
            if (c!=EOF){
                s=0;
            }
            else{
                s=1;
            }
            h=0;
            t=0;
        }
    }while (c!=EOF);
    if (s==1){
        printf("%s","NO");
    }
    return 0;
} 