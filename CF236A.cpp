#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
char n[100];
cin>>n;
int l=strlen(n);
int c=0;
sort(n,n+l);
for(int i=0;i<l;i++){

        if(n[i]!=n[i+1])
c++;


    }
if(c%2==0)
    cout<<"CHAT WITH HER!"<<endl;
else
    cout<<"IGNORE HIM!"<<endl;
return 0;
}
