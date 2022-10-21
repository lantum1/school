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
			b=i+1;
			if(s[b]=='0' || s[b]=='1' || s[b]=='2' || s[b]=='3' || s[b]=='4' || s[b]=='5' || s[b]=='6' || s[b]=='7' || s[b]=='8' || s[b]=='9'){
				cout<<"Является";
				break;
			}
			else{
				cout<<"Не является";
				break;
			}
		}
	}
}
