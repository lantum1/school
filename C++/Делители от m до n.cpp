#include <iostream>
using namespace std;
int main(){
	int m;
	int n;
	int g=2;
	cin>>m>>n;
	for(int i=m; m<=n; i++){
		cout<<m<<": ";
		while (g<=m/2){
				if (m%g==0){
					cout<<g<<", ";
				}
				g=g+1;
			}
		m=m+1;
		g=2;
		cout<<"; ";
		}
}
