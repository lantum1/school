#include<iostream>
using namespace std;
int main(){
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int k=0;
	cin>>a>>b>>c>>d;
	for (int i=0; i<100; i++){
		a=a+1;
		b=b+1;
		k=k+1;
		if (a==b){
			a=a/b;
			b=1;
		}
		else if (a%b==0){
			a=a/b;
			b=1;
		}
		else if (b%a==0){
			b=b/a;
			a=1;
		}
		if (a==c && b==d){
			cout<<k;
			return 0;
		}
	}
	cout<<"0";
}
