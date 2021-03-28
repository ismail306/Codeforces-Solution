#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,arr[4];
    cin>>a>>b>>c;

    arr[0]=a+b+c;
    arr[1]=(a+b)*c;
    arr[2]=a*(b+c);
    arr[3]=a*b*c;
    sort(arr,arr+4);
    cout<<arr[3];
}
