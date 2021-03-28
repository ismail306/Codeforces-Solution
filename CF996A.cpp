#include<iostream>
using namespace std;
int main(){

int c=0,v,a,b,d,e,f;
cin>>v;
a=v/100;
c+=a;
b=(v%100)/20;
c+=b;
d=(v%20)/10;
c+=d;
e=(v%10)/5;
c=c+e;
f=(v%5)/1;
c=c+f;
cout<<c;

}
