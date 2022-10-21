#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	float a,b,c,d,x1,x2;
	cin>>a>>b>>c;
	if (a==0){
		if (b==0) {
			cout<<"X - любое число";
	}
		else {
			cout<<"Решений нет";
		}
	}
	else{
	d=b*b-4*a*c;
		if (d<0)
			cout<<"Вещественных корней нет";
		else {
			if (d==0) {
			x1=-b*(2*a);
			x2=x1;
			cout<<x1<<" "<<x2;
		}
			else {
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			cout<<x1<<" "<<x2;
		}
}
}	
}
