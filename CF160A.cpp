#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int a;
    cin>>a;
    int arr[a],i,sum=0;
    for(i=0;i<a;i++){
       cin>>arr[i];
       sum+=arr[i];

    }
    sum=sum/2;
    sort(arr,arr+a);
    int c=0,nsum=0;
    for(i=a-1;i>=0;i--){
        nsum+=arr[i];
        c++;
      if(nsum>sum){
        break;
        }

    }
    cout<<c<<endl;
    return 0;

}


