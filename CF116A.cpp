#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int tc;
cin>>tc;
int arr1[tc],arr2[tc],arr[tc];
for(int i=0;i<tc;i++){
cin>>arr1[i]>>arr2[i];
if(i>0){
arr1[i]=arr2[i-1]-arr1[i];
}
arr2[i]=arr2[i]+arr1[i];

}

cout<<*max_element(arr2,arr2+tc);
/*0 3
2 5
4 2*/
}
