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
		if (s[i]==','){
			b=b+1;
		}
		if (s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9'){
			c=c+1;
		}
	}
	if (b>c){
		cout<<"Запятых больше";
	}
	else if (b<c){
		cout<<"Цифр больше";
	}
	else{
		cout<<"Кол-во запятых и цифр одинаково";
	}
}
