#include<iostream>
using namespace std;
int main(){

int n,a,b,c,cnt=0;
cin>>n>>a>>b>>c;
if(a+b==n)
    cout<<"2";
else if(a+c==n)
    cout<<"2";
   else if(b+c==n)
    cout<<"2";
   else if(b+c+a==n)
    cout<<"3";
    else if(a==n||b==n||c==n)
        cout<<"1";
    else
    cout<<n;


}
