#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int a,c=0;
cin>>a;
int arr[a],b;

for(int i=0;i<a;i++)
    cin>>arr[i];
cin>>b;
int arr2[b];
for(int j=0;j<b;j++)
    cin>>arr2[j];

sort(arr,arr+a);
sort(arr2,arr2+b);
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){

        if(abs(arr[i]-arr2[j])<2){
           c++;
           arr2[j]=105;
           break;
        }

    }
}
cout<<c;

}
