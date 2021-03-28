#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
if(1<=a&&a<=b&&b<=c&&c<=d&&d<=500000){
    if(a==b==c==d)
        cout<<"1";
   else if(a==b==c||b==c==d||c==d==a||d==a==b)
        cout<<"2";
       else if(a==b||b==c||c==d||d==a||a==c||d==b)
        cout<<"3";
        else
            cout<<"4";}
        return 0;
}
