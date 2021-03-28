#include<iostream>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int a=n/2;
if(n%2==0 &&a%2==0)
    cout<<a<<" "<<a/2<<" "<<a/2<<endl;
else if(n%2==0 &&a%2!=0)
 cout<<2<<" "<<a-1<<" "<<a-1<<endl;
else
cout<<a<<" "<<a<<" "<<1<<endl;
}

}
