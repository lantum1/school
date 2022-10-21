#include<stdio.h>
int main(){
    int h;
    scanf("%d",&h);
    int s=0,t=0;
    int arr[h][h];
    int arr1[h][h];
    for (int i=0; i<h; i++){
        for (int j=0; j<h; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0; i<h; i++){
        for (int j=0; j<h; j++){
            for (int g=0; g<h;g++){
                t+=arr[i][g]*arr[g][j];
            }
            arr1[i][j]=t;
            t=0;
        }

    for (int i=0; i<h; i++){
        for (int j=0; j<h; j++){
            printf("%d%s",arr1[i][j], " ");
        }
        putchar('\n');
    }
    return 0;
} 