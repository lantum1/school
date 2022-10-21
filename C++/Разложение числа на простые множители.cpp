#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cin>>a;
	for (int i=0; a!=1; i++){
		for (int g=2; a; g++){
			if (a%g==0){
				b=g;
				break;
			}
		}
		cout<<b<<"; ";
		a=a/b;
	}
}

