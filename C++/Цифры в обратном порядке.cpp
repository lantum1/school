#include <iostream>
using namespace std;
int main (){
	int a;
	cin>>a;
	int b=a;
	while (a!=0){
		b=a%10;
		cout<<b;
		a=a/10;
}
}
