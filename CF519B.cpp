#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int a,i,t;
cin>>a;

int arr[a],arr1[a-1],arr2[a-2];
for(i=0;i<a;i++){
    cin>>arr[i];
}
sort(arr,arr+a);
for(i=0;i<a-1;i++){
    cin>>arr1[i];
}
sort(arr1,arr1+(a-1));


for(int j=0;j<a;j++){
    if(arr[j]!=arr1[j]){

    t=arr[j];
    break;
    }
}
for(i=0;i<a-2;i++){
    cin>>arr2[i];
}
sort(arr2,arr2+(a-2));
for(int j=0;j<a-1;j++){
    if(arr1[j]!=arr2[j]){

    cout<<t<<"\n"<<arr1[j]<<endl;
    break;
    }
}
}
