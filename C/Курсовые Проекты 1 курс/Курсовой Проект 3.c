#include <math.h>
#include <stdio.h>
double fact(double f){
    if (f==0){
        return 1;
    }
    return (f*fact(f-1));
}
int main () {
    double eps = 1.0;
    while ((1.0 + eps / 2.0) > 1.0) {
        eps = eps / 2.0;
    }
    int n,c;
    scanf("%d %d",&n,&c);
    double a,b,da,accur,taylor,bi,t1,k;
    a=0.0;
    b=1.0;
    da = (b-a)/(double)n;
    accur = eps*(double)c;
    printf("Эпсилон = %.2e Точность = %.2e\n", eps,accur);
    for (int i = 0; i < n+1; i++) {
        taylor=1.0;
        k = 0.0;
        do{
            k+=1.0;
            t1=(pow(-1,k)*pow(a,2*k)/fact(2*k));
            taylor+=t1;
        }while ((t1>accur || t1<(-accur)) && (k<100));
        bi=cos(a);
        printf("| %.2f | %.52f | %.52f | %2d | %.2e |\n",a,taylor,bi,int(k),fabs(taylor-bi));
        a+=da;
    }
    return 0;
}
