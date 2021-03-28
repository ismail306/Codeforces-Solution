#include<bits/stdc++.h>
#include<iostream>
#include<Algorithm>
using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    int arr[t],sum=0;
    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+t);
    for(int i=0;i<t;i++){
        sum+=arr[i];
        if (sum==4||sum==3)
            c++;
        if(sum >4)
        {sum=0;
        c++;
        }

    }
    cout<<c;
}
