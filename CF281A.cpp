#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main(){
string w;
cin>>w;
if(w[0]<=90 && w[0]>64)
    cout<<w;

else
{
    w[0]=(toupper(w[0]));
    cout<<w<<endl;
}
return 0;
}
