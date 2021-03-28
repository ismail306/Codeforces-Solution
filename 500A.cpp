#include<iostream>
using namespace std;
int main(){

int n,t;
cin>>n>>t;
int ak47[n];
for(int i=0;i<n-1;i++)
cin>>ak47[i];

int j;
for(j=1;j<=n-1;){
j=j+ak47[j-1];
if((j)==t)
   {
    cout<<"YES";
       return 0;
   }
//cout<<"j=="<<j<<endl;
}

    cout<<"NO";
}
