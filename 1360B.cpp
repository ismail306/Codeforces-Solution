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
        int arr[n],arr1[(n+1)/2],arr2[n/2],j=-1,k=-1;
        for(int i=0; i<n; i++)

            cin>>arr[i];

            sort(arr,arr+n);
            for(int i=0;i<)

            if(i<(n-1)/2 ||i==n-1)
            {
                k++;
                arr1[k]=arr[i];
            }
            else
            {
                j++;
                arr2[j]=arr[i];
            }
        }


    cout<<abs(*max_element(arr1,arr1+(n+1)/2)-*min_element(arr2,arr2+(n/2)))<<endl;
    }
}
