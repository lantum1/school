#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
double sqrt (double x, double n){
    for (double i=1.00000; i<x; i=i+0.00001){
        double x1=x;
        for (int j=0; j<n-1; j++){
            x1=x1/i;
        }
        if(abs(round(x1*100000)/100000-i)<0.00001){
            cout<<i;
            break;
        }
    }
}
int main(){
    double x,n=0;
    cin>>x>>n;
    sqrt (x,n);
}
