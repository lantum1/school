#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[255];
    gets(s);
	int b=0;
	int c=0;
	for (int i=0; i<=strlen(s)-1;i++){
		if (s[i]=='н'){
			b=b+1;
		}
		if (s[i]=='к'){
			c=c+1;
		}
	}
	if (b>c){
		cout<<"Буква Н встречается раньше";
	}
	if (b<c){
		cout<<"Буква К встречается раньше";
	}
	if (b==c){
		cout<<"Поровну";
	}
}

