#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m[20];
	int min=0;
	int min1=20;
	int c=0;
	int k=0;
	for (int i=0; i<20; i++){
		m[i]=rand()%20+0;
		cout<<m[i]<<' ';
		if (m[i]%2!=0 || m[i]==0){
			min=m[i];
			if (min<min1){
				min1=min;
			}
		}
	}
	cout<<endl<<min1;
}
