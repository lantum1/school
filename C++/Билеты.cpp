#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,g,c1,d1,e1,g1;
	cin>>a;
	c=a/60;
	c1=a%60;
	setlocale(LC_ALL, "Russian");
	if (c1>=38) {
		c=c+1;
		cout<<c<<" �����(��) �� 60 �������, ";
		return 0;
	}
	d=c1/20;
	d1=c1%20;
	if (d1>=18) {
		d=d+1;
		cout<<c<<" �����(��) �� 60 �������, "<<d<<" �����(��) �� 20 �������, ";
		return 0;
	}
	e=d1/10;
	e1=d1%10;
	if (e1>=8) {
		e=e+1;
		cout<<c<<" �����(��) �� 60 �������, "<<d<<" �����(��) �� 20 �������, "<<e<<" �����(��) �� 10 �������, ";
		return 0;
	}
	g=e1/5;
	g1=e1%5;
	cout<<c<<" �����(��) �� 60 �������, "<<d<<" �����(��) �� 20 �������, "<<e<<" �����(��) �� 10 �������, "<<g<<" �����(��) �� 5 �������, "<<g1<<" �����(��) �� 1 �������";
	return 0;
}
