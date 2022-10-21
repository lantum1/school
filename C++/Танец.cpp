#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
	int n=0,p=0,k=0,e=0,x=0,y=0,l=0;
	cin>>n>>p>>k;
	int d[n];
	for (int i=0; i<n; i++){
		e=e+1;
		d[i]=e;
	}
	for (int i=1; i<k+1; i++){
		if (i%2!=0){
			for (int g=0; g<n; g=g+2){
				x=d[g];
				y=d[g+1];
				d[g]=y;
				d[g+1]=x;
			}
		}
		else if (i%2==0){
			for (int h=1; h<n-1; h=h+2){
				if (h==n-3){
					x=d[h+2];
					y=d[h-n+3];
					d[h+2]=y;
					d[h-n+3]=x;
				}
				x=d[h];
				y=d[h+1];
				d[h]=y;
				d[h+1]=x;
			}
		}
	}
	for (int i=0; i<n; i++){
		if (d[i]==p){
			if (i==0){
				cout<<d[n-1]<<' '<<d[i+1];
			}
			else if (i==n-1){
				cout<<d[i-1]<<' '<<d[0];
			}
			else{
				cout<<d[i-1]<<' '<<d[i+1];
			}
		}
	}
}
