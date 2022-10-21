#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int k, n, c=1, l, h, j=k, v=0, v1=0, b;
	cin>>k>>n;
	int a[n];
	for (int i=0; i<n; i++){
		cin>>b;
		a[i]=b;
	}
	int i=0;
	while (c<=n){
		if (j==0){
			j=k;
			l=0;
			c=1;
			i=0;
			v1=v1+v*2;
			v=0;
		}
		v=v+1;
		if (a[i]>j){
			a[i]=a[i]-k;
			j=0;
			i=0;
			continue;
		}
		l=l+a[i];
		a[i]=0;
		i=i+1;
		j=k-l;
		if (c==n){
			break;
		}
		c=c+1;
	}
	cout<<v*2+v1;
}
