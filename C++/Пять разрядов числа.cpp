#include <iostream>
using namespace std;
int main (){
	int a;
	cin>>a;
	int b=a;
	int c=a;
	int k=0;
	int m=0;
	while (a!=0){
		b=a%10;
		a=a/10;
		k=k+1;
}
	if (k==5){
		cout<<c;
	}
	else if (k<5){
		while (m+k!=5){
				m=m+1;
				cout<<"0";
	}
	cout<<c;
}
	else{
		cout<<c%100000;
			
	}
}	
