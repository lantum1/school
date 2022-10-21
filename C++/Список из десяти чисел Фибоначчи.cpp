#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m[8];
	int g=0;
	int k=0;
	int f1=1;
	int f2=1;
	int fn=0;
	for (int i=0; i<8; i++){
		fn=f1+f2;
		m[g]=fn;
		f1=f2;
		f2=fn;
		g=g+1;
	}
	cout<<"1 1 ";
	for (int f=0; f<g; f++){
		cout<<m[f]<<' ';
	}
}
