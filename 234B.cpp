#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int arr[a],arr1[a];
for(int i=0;i<a;i++){
    cin>>arr[i];
    arr1[i]=arr[i];
}
sort(arr,arr+a);
for(int i=0;i<a;i++){
    if(arr[i]!=arr[i+1])
       {

        cout<<arr[i+1]<<endl;

        break;
}
}
for(int i=0;i<a;i++){
    if(arr1[i]!=arr[0])
        cout<<i+1<<" ";
}
}
