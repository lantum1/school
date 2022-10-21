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
	int h=0;
	int o[20];
	cin>>h;
	if (h>19){
		cout<<"¬ведите значение меньше!";
	}
	if (h<0){
		cout<<"¬вести значение больше!";
	}
	for (int i=0; i<20; i++){
		m[i]=rand()%201-100;
		cout<<m[i]<<' ';
		if (i!=h){
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
