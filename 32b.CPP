#include<bits/stdc++.h>
using namespace std;
int main(){
vector <int> v1;
int m,n,v,s=0;
cin>>n>>m;
for(int i=0;i<n;i++){
    cin>>v;
    v1.push_back(v);
}
sort(v1.begin(),v1.end());
for(int i=0;i<m;i++)
    if(v1.at(i)<=0)
    s+=abs(v1.at(i));


   cout<<s;
}

