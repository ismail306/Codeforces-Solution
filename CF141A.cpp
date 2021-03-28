#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string a,b,f,sf;
    cin>>a>>b>>f;
    sf=a.append(b);
   sort(sf.begin(),sf.end());
    sort(f.begin(),f.end());
   if(sf.compare(f)==0 )
   cout<<"YES";
   else
    cout<<"NO";

}
