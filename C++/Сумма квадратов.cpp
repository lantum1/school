#include<iostream>
using namespace std;
int main(){
	int n;
	int m;
	cin>>n;
	m=n*n;
	for(int i=0; i<=2*n; i++){
		n=n+1;
		m=m+n*n;
	}
	cout<<m;
}
