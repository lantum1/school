#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m[10];
	int o[10];
	int g=0;
	int k=0;
	for (int i=0; i<10; i++){
		m[i]=rand()%201-100;
		cout<<m[i]<<' ';
		if (m[i]<0){
			o[g]=m[i];
			g=g+1;
			k=k+1;
		}
	}
	cout<<endl;
	for (int f=0; f<k; f++){
		cout<<o[f]<<' ';
	}
}
