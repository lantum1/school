#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[255];
    gets(s);
	int g=0;
	int e=0;
	for (int i=0; i<=strlen(s)-1;i++){
		e=e+1;
		if (s[i]=='/'){
			g=i;
			for (int k=g-e+1; k<g; k++){
				cout<<s[k];
			}
			e=0;
			cout<<endl;
		}
	}
	for (int d=g+1; d<=strlen(s)-1; d++){
		cout<<s[d];
	}
}
