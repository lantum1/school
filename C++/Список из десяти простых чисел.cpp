#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m[10];
	int k=0;
	int g=0;
	int n=10;
	int p=0;
	int l=101;
	while (p<n){
		k=0;
		for (int i=2; i<l-1; i++){
			if (l%i==0){
				k=1;
			}
			if (k==1){
				break;
			}
		}
		if (k==0){
			m[g]=l;
			p=p+1;
			g=g+1;
		}
		l=l+1;
	}
	for (int f=0; f<g; f++){
		cout<<m[f]<<' ';
	}
}
