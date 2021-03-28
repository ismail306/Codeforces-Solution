#include<bits/stdc++.h>
using namespace std;
int main(){

int t,n,v;
cin>>t;
while(t--){

   cin>>n;
int temp,arr[n],arr2[n],k=0;
   for(int i=0;i<n;i++){
    cin>> arr[i];
   }
  sort(arr,arr+n);
  for(int i=0;i<n;i++){
    if(arr[i]!=arr[i+1])
         cout << arr[i]<<" ";
  else{
    arr2[k]=arr[i];
    k++;
  }

}
for(int i=0;i<k;i++)
  cout <<arr2[i]<< " ";
cout<<endl;
}
}
