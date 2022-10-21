#include<stdio.h>
int main(){
    int h;
    scanf("%d",&h);
    int l=-1,m=0,n=0,s=0;
    int arr[h][h];
    for (int i=0; i<h; i++){
        for (int j=0; j<h; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int i=h-1,j=0;
    while (1){
        if (s%2==0){
            while (j<h && i>=0){
                printf("%d%s",arr[i][j]," ");
                i--;
                j++;
            }
            s++;
            i++;
            j--;
            if (i==0 && j==0){
                break;
            }
            l++;
            m++;
            i=i+m;
            j=j+l;
        }
        else if (s%2!=0){
            while(i<h  && i>=0){
                printf("%d%s",arr[i][j], " ");
                i++;
                j--;
            }
            s++;
            i--;
            j++;
            if (i==0 && j==0){
                break;
            }
            n++;
            
            i=i-n;
            j=j-n;
        }
    }
    return 0;
} 