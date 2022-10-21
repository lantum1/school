#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[255];
    gets(s);
	int g=0;
	int max=0;
	int max1=0;
	int h=0;
	int c=0;
	int x=0;
	for (int i=0; i<=strlen(s)-1; i++){
		if (s[i]==' '){
			g=i;
			if (max1<max){
				max1=max;
			}
			max=-1;
		}
		max=max+1;
	}
	for (int k=g+1; k<=strlen(s)-1; k++){
		h=h+1;
	}
	if (h>max1){
		max1=h;
	}
	else{
		max1=max1;
	}
	for (int i=0; i<=strlen(s)-1; i++){
		c=c+1;
		if (i+1<=strlen(s)-2){
			if (s[i]!=' ' && s[i+1]==' '){
				x=i;
				if (c==max1){
					for (int f=x-c+1; f<x+1; f++){
						cout<<s[f];
					}
					return 0;
				}
				c=-1;
			}
		}
	}
	for (int n=x+2; n<=strlen(s)-1; n++){
		cout<<s[n];
	}
}
