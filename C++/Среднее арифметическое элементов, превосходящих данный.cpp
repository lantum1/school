#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m[20];
	int b=0;
	int c=0;
	int k=0;
	int f;
	cin>>f;
	for (int i=0; i<20; i++){
		m[i]=rand()%30-10;
		cout<<m[i]<<' ';
		if (m[i]>f){
			b=m[i];
			c=c+b;
			k=k+1;
		}
	}
	c=c/k;
	cout<<endl<<c;
}
