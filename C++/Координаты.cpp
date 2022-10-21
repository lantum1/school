#include<iostream>
using namespace std;
int main () {
	int x;
	int y;
	cin>>x>>y;
	setlocale(LC_ALL, "Russian");
	if (x>0 && y>0){
		cout<<"I четверть";
}
	else if (x<0 && y>0) {
		cout<<"II четверть";
}
	else if (x<0 && y<0) {
		cout<<"III четверть";
}
	else if (x>0 && y<0) {
		cout<<"IV четверть";
}
	else {
		cout<<"Точка находится в середине";
}	
}
