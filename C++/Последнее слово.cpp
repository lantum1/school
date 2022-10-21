#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[255];
    gets(s);
    int b=0;
	for (int i=0; i<=strlen(s)-1;i++){
		if (s[i]==' '){
			b=i;
		}
	}
	for (int k=b+1; k<=strlen(s)-1; k++){
		cout<<s[k];
	}
}
