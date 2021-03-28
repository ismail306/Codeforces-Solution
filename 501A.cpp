#include<bits/stdc++.h>
using namespace std;
int main(){
int p1,p2,t1,t2;
cin>>p1>>p2>>t1>>t2;
int a=max(((3*p1)/10),(p1-((p1/250)*t1)));
int b=max(((3*p2)/10),(p2-((p2/250)*t2)));
if(a>b)
    cout<<"Misha";
else if(a<b)
    cout<<"Vasya";
    else
cout<<"Tie";

}
