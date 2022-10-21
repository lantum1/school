#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<vector>
using namespace std;
bool comp2 (int a,int b) {return (a>b);}
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m[20];
	vector<int> v;
	int c=0;
	int k=0;
	for (int i=0; i<20; i++){
		m[i]=rand()%30-10;
		cout<<m[i]<<' ';
	}
	for (int i=0; i<20; i++){
		v.push_back(m[i]);
	}
	cout<<endl;
	sort(v.begin(), v.end(), comp2);
	for (int i=0; i<20; i++){
		cout<<v[i]<<' ';
	}
}
