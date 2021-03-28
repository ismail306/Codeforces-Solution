#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    if(n<=k)
        cout<<1;
    else{
    for(int i=0;i<=n-k;i++)
    {arr2[i]=0;
        for(int j=i;j<i+k;j++)
        arr2[i]+=arr1[j];
    }

    /* for(int i=0;i<n-k;i++)
     cout<<arr2[i]<<endl;*/

int m =*min_element(arr2,arr2+(n-k+1));
 for(int i=0;i<n-k;i++)
    {
     if(arr2[i]==m)
{
    cout<<i+1;
    break;
}

    }}


}
