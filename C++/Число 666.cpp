#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[255];
    gets(s);
	int m;
	int n;
	int d=0;
	cin>>m>>n;
	m=m-1;
	for (int i=m; i<=n-1; i++){
		if (s[i]=='6'){
			d=d+1;
		} 
	}
	if (d>=3){
		cout<<"Образует";
	}
	else{
		cout<<"Не образует";
	}
}
