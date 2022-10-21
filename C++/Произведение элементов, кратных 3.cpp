#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m[20];
	int b=0;
	int c=1;
	for (int i=0; i<20; i++){
		m[i]=rand()%30-10;
		cout<<m[i]<<' ';
		if (m[i]%3==0 && m[i]!=0){
			b=m[i];
			c=c*b;
		}
	}
	cout<<endl<<c;
}
