#include<iostream>
using namespace std;
int main(){
    int i, y,a,b,c,d;
    cin >>y;
    for( i=y+1;;i++){
        a=i%10;
        b=(i/10)%10;
        c=(i/100)%10;
        d=(i/1000);
        if(a!=b&&b!=c&&c!=d&&a!=c&&a!=d&&b!=d)
        break;

    }
        cout<<i;



return 0;}
