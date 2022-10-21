#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[255];
    gets(s);
	int g=0;
	int k=0;
	for (int i=0; i<=strlen(s)-1;i++){
		if (s[i]==' '){
			k=k+1;
		}
		if (k==6){
			g=i;
			break;
		}
	}
	for (int k=0; k<g; k++){
		cout<<s[k];
	}
}
