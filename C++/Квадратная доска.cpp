#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int a,k;
	cin>>k;
	a=((k/4)+1)+((k/4)-1)+((k/4)*2);
	if (k==1 || ((k>0) && k==a))
		cout<<"Это возможно";
	else
		cout<<"Это не возможно";
}
