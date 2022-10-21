#include<stdio.h>
int abs(int a){
    if (a>=0){
        return a;
    }
    else{
        return -a;
    }
}
int main(){
    int i,l=0,m=0;
    while (scanf("%d", &i) == 1){
        while (i!=0){
            l=i%10;
            m=i/10%10;
            if (abs(i/100%10)==abs(l-m)){
                printf("%d\n",abs(i/100%10));
            }
            i=i/10;
        }
    }
    return 0;
} 