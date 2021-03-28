#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

    int t2,k,sum=0;
    cin>>t2>>k;
    int ak47[t2],MG16[t2];
    for(int i=0;i<t2;i++)
        {cin>>ak47[i];

        }
    for(int i=0;i<t2;i++)
        {cin>>MG16[i];
        }
    sort(ak47,ak47+t2);
     sort(MG16, MG16 + t2, greater<int>());
    for(int i=0;i<k;i++)
    {
      if(ak47[i]<MG16[i])
        swap(ak47[i],MG16[i]);
    }
    for(int i=0;i<t2;i++)
        sum+=ak47[i];
    cout<<sum<<endl;
    }

}
