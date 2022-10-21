#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m[20];
	int k=0;
	int g=0;
	int b[20];
	for (int i=0; i<20; i++){
		m[i]=rand()%201-100;
		cout<<m[i]<<' ';
		if (m[i]>0){
			b[g]=m[i];
			g=g+1;
			k=k+1;
		}
	}
	cout<<endl;
	for (int f=0; f<k; f++){
		cout<<b[f]<<' ';
	}
}
