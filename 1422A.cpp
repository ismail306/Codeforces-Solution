#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int a[3];
cin>>a[0]>>a[1]>>a[2];
//cout<<a[0]+a[1]+a[2]<<endl;
cout<<*max_element(a,a+3)<<endl;

    }
}
