#include<iostream>
using namespace std;
int main () {
	int x;
	int y;
	cin>>x>>y;
	setlocale(LC_ALL, "Russian");
	if (x>0 && y>0){
		cout<<"I ��������";
}
	else if (x<0 && y>0) {
		cout<<"II ��������";
}
	else if (x<0 && y<0) {
		cout<<"III ��������";
}
	else if (x>0 && y<0) {
		cout<<"IV ��������";
}
	else {
		cout<<"����� ��������� � ��������";
}	
}
