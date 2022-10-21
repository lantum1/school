#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[255];
    gets(s);
	int b=1;
	int c=2;
	int d=0;
	for (int i=0; i<=strlen(s)-1;i++){
		if ((i-1<strlen(s)-1 || i==0) && b<strlen(s)-1 && c<=strlen(s)-1){
			if (s[i]=='è' && s[b]=='ë' && s[c]=='è'){
				d=d+1;
			}
		}
		b=b+1;
		c=c+1;
	}
	cout<<d;
}
