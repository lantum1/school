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
			break;
		}
	}
	for (int k=0; k<=b; k++){
		cout<<s[k];
	}
}
