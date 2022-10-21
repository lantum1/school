#include<iostream>
#include <stdio.h>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char a[255];
	char b[255];
	gets(a);
    gets(b);
    int h=0;
    for (int i=0; i<strlen(a)-1;i++){
    	if (i+1<strlen(a)){
    		for (int g=0; g<strlen(b)-1; g++){
    			if (g+1<strlen(b)){
    				if (a[i]==b[g] && a[i+1]==b[g+1]){
    					h=h+1;
    					break;
					}

    			}
    			else{
    				break;

				}
			}
		}
		else{
			break;
		}
    }
    cout<<h;
}
