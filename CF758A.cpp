#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int a,sum;
cin>>a;
int i,arr[a];
for(i=0;i<a;i++){

   cin>>arr[i];
}
int b= *max_element(arr, arr + a);
//cout<<b;
for(int j=0;j<a;j++){
  sum=sum+(b-arr[j]);

}
cout<<sum;
}
//*max_element(arr, arr + a);5
