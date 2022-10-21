#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m[20];
	int c=0;
	int k=0;
	for (int i=0; i<20; i++){
		m[i]=rand()%30-10;
		cout<<m[i]<<' ';
	}
	cout<<endl;
	for (int i=0; i<20; i++){
		if (m[i]%2!=0){
			cout<<m[i]<<' ';
		}
	}
}
