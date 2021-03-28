#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
string s;
cin>>s;
   if(s[0]>96)
        cout<<(char)(s[0]-32);

    else
        cout<<s[0];


for(int i=1;i<s.length();i++)
{
if(s[i]<91)
cout<<(char)(s[i]+32);
else
    cout<<s[i];
}
}
