#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m[20];
	int max=0;
	int max1=0;
	int g=0;
	for (int i=0; i<20; i++){
		m[i]=rand()%30-10;
		cout<<m[i]<<' ';
		max=m[i];
		if (max1<max){
			max1=max;
			g=i;
		}
	}
	cout<<endl<<max1<<endl<<g;
}
