#include<iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char a[255];
	char b[255];
	char c[255];
    gets(a);
    gets(b);
    gets(c);
	int d[9];
	int e=0;
	int f=0;
	int v=0;
	int g=0;
	int l=0;
	for (int i=0; i<=strlen(a);i++){
		if (a[i]==':' || i+1==strlen(a)){
			if (i+1==strlen(a)){
				g=(a[i-1]-'0')*10+(a[i]-'0');
				d[l]=g;
				l=l+1;
				break;
			}
			g=(a[i-2]-'0')*10+(a[i-1]-'0');
			d[l]=g;
			l=l+1;
		}
	}
		for (int i=0; i<=strlen(b);i++){
		if (b[i]==':' || i+1==strlen(b)){
			if (i+1==strlen(b)){
				g=(b[i-1]-'0')*10+(b[i]-'0');
				d[l]=g;
				l=l+1;
				break;
			}
			g=(b[i-2]-'0')*10+(b[i-1]-'0');
			d[l]=g;
			l=l+1;
		}
	}
		for (int i=0; i<=strlen(c);i++){
		if (c[i]==':' || i+1==strlen(c)){
			if (i+1==strlen(c)){
				g=(c[i-1]-'0')*10+(c[i]-'0');
				d[l]=g;
				break;
			}
			g=(c[i-2]-'0')*10+(c[i-1]-'0');
			d[l]=g;
			l=l+1;
		}
	}
	if (d[0]<d[6]){
		e=d[6]-d[0];
		if (e%2==0){
			e=e/2;
		}
		else if (e%2>0.5){
			e=e/2+1;
		}
		else{
			e=e/2;
		}
	}
	if (d[1]<d[7]){
		f=d[7]-d[1];
		if (f%2==0){
			f=f/2;
		}
		else if (f%2>0.5){
			f=f/2+1;
		}
		else{
			f=f/2;
		}
	}
	else if (d[7]<d[1]){
		f=d[1]-d[7];
		if (f%2==0){
			f=f/2;
		}
		else if (f%2>0.5){
			f=f/2+1;
		}
		else{
			f=f/2;
		}
	}
	if (d[2]<d[8]){
		v=d[8]-d[2];
		if (v%2==0){
			v=v/2;
		}
		else if (v%2>0.5){
			v=v/2+1;
		}
		else{
			v=v/2;
		}
	}
	else if (d[8]<d[2]){
		v=d[2]-d[8];
		if (v%2==0){
			v=v/2;
		}
		else if (v%2>0.5){
			v=v/2+1;
		}
		else{
			v=v/2;
		}
	}
	d[3]=d[3]+e;
	if (d[3]>=24){
		while(d[3]>=24){
			d[3]=d[3]-24;
		}
	}
	d[4]=d[4]+f;
	if (d[4]>=60){
		while(d[4]>=60){
			d[4]=d[4]-60;
			d[3]=d[3]+1;
		}
	}
	d[5]=d[5]+v;
	if (d[5]>=60){
		while(d[5]>=60){
			d[5]=d[5]-60;
			d[4]=d[4]+1;
		}
	}
	cout<<d[3]<<':'<<d[4]<<':'<<d[5];
}
