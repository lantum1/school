#include<iostream>
using namespace std;
int main () {
	double a;
	double b;
	double c;
	cin>>a>>b>>c;
	if (c<=a&c<=b) {
		cout<<c<<" ";
		if (a<=b) {
			cout<<a<<" "<<b;
	}
		else {
			cout<<b<<" "<<a;
		}
	}
	else if (b<=a&b<=c) {
		cout<<b<<" ";
		if (a<=c){
			cout<<a<<" "<<c;
	}
		else {
			cout<<c<<" "<<a;
		}
	}
	else if (a<=b&a<=c) {
		cout<<a<<" ";
		if (b<=c){
			cout<<b<<" "<<c;
		}
		else {
			cout<<c<<" "<<b;
		}
	}
}

