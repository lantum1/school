#include <iostream>
using namespace std;
int main (){
	int n;
	int p=1;
	int m=3;
	cin>>n;
	cout<<"2; ";
	while (p!=n){
		int k=0;
		for (int i=2; i<m-1; i++){
			if (m%i==0){
				k=1;
			}
			if (k==1){
				break;
			}
		}
		if (k==0){
			cout<<m<<"; ";
			p=p+1;
		}
		m=m+1;
	}
}
