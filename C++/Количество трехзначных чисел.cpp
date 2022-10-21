#include <iostream>
using namespace std;
int main(){
	int s;
	int k=0;
	cin>>k;
	for(int i=100; i<999; i++){
		if (i/100+i%100/10+i%10==s)
			k=k+1;
	}
	cout<<k;
}
