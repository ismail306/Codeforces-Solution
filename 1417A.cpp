#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n,k,d=0;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
           int c=0;
        while(arr[i]<=k)
        {
            arr[i]+=arr[0];
           // cout<<arr[i]<<endl;
    if(arr[i]<=k)
        d++;
        }
    }
cout<<d<<endl;
}
}
