#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],c=0;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0; i<n; i++)
        {
            if(arr[i]==arr[i+1])
                continue;
            else
                c++;


        }

        cout<<c<<endl;
    }




}
