#include <iostream>
using namespace std;
int main(){
	int n;
	int f1=1;
	int f2=1;
	int fn;
	cin>>n;
	cout<<f1<<" "<<f2<<" ";
	for (int i=2; i<n; i++){
		fn=f1+f2;
		cout<<fn<<" ";
		f1=f2;
		f2=fn;
	}
}
