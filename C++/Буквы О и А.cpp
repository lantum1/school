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
		if (s[i]=='а') {c++;}
		if (s[i]=='о') {b++;}
	}
	if (c>b){cout<<"Больше букв А";}
	if (c<b){cout<<"Больше букв О";}
	if (c==b){cout<<"Поровну";}
}
