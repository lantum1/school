#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
	int a=0, b=0;
	float f;
	cin>>a;
	int m[a];
	for (int i=0; i<a; i++){
		cin>>b;
		m[i]=b;
	}
	for (int i=0; i<a; i++){
		f=m[i]*0.75;
		for (int d=0; d<a; d++){
			if (m[d]==f){
				cout<<m[d]<<' ';
				break;
			}
		}
		
	}
}
