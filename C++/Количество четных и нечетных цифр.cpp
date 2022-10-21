#include <iostream>
using namespace std;
int main (){
	int a;
	int k=0;
	int n=0;
	cin>>a;
	while(a!=0){
		if (a%10%2==0 && a%10!=0)
			k=k+1;
		else
			n=n+1;
		a=a/10;
}
	cout<<k<<" "<<n;
		
	}
