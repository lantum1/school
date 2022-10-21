#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	double a,b,x;
	cin>>a>>b;
	if (a==0) {
		if (b==0) {
			cout<<"X - любое число";
	}
		else {
			cout<<"Решений нет";
		}
	}
	else {
		x=b/a;
		cout<<x;
}	
}
