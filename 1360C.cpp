#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 int ak47[n],c=0,m=0;
 for(int i=0;i<n;i++)
    {cin>>ak47[i];
    if (ak47[i]%2==1)
    m++;
    }
    sort(ak47,ak47+n);
 for(int i=0;i<n-1;i++){
    if((ak47[i+1]-ak47[i]==1))
        {c++;
        break;}
 }
 if(c>0||m%2==0)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}


}
