 #include<stdio.h>
int main(){
    int i=0,l=0,m=0,c,s=-2,h=-1;
    while ((c=getchar())!=EOF){
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
                            s=1;
                            continue;
                        }
                    }
                    else{
                        l=l*10;
                        m++;
                    }
                }
                else {
                    s=1;
                    continue;
                }
                
                if (l==2147483640){
                    if (c<='7'){
                        l=(c-'0')+l;
                    }
                    else{ 
                        s=1;
                        continue;
                    }
                }
                else{
                    l=(c-'0')+l;
                }
            }
            else{
                l=l*10;
                l=(c-'0')+l;
            }
        }
        else if (c==' ' || c=='\n' || c=='\t' || c==','){
            if (s==0){
                printf("%d",l);
            }
            l=0;
            s=-2;
            m=0;
            h=-1;
            putchar(c); 

        }
        else if((c=='+' || c=='-') && (h==-1)){
            l=0;
            m=0;
            h=c;
            putchar(c); 
        }
        else{
            if (s==0){
                printf("%d",l);
            }
            l=0;
            s=-1;
            m=0;
            h=-2;
            putchar(c); 
        }
    }
    if (s==0){
        printf("%d\n",11);
    }
    return 0;
} 