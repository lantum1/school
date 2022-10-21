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
	}
	if (b>0){
		cout<<"Есть";
	}
	else{
		cout<<"Нет";
	}
}
