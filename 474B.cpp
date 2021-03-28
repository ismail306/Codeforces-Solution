#include<iostream>
using namespace std;
int main()
int solve(int mina,int maxa){

for(int i=mina; i<maxa; i++)
        {
             //cout<<arr1[i]<<endl;
            if((arr2[j]<=arr1[i])&&(arr2[j]>arr1[i-1]))

                {cout<<i+1<<endl;
                c++;
                }


        }
        if(c==0)
                cout<<1<<endl;
    }



}

{

    int a;
    cin>>a;
    int arr[a],arr1[a],sum=0;
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        arr1[i]=sum;
        //  cout<<arr1[i]<<endl;
    }
    sort(arr1,arr1+a);

    int t;
    cin>>t;
    int arr2[t];
    for(int j=0; j<t; j++)
    {int c=0,mid;
        cin>> arr2[j];
        if(arr2[j]>arr[a/2])
            {mina=a/2;
        maxa=a;
        solve(mina,maxa);
        }
        if(arr2[j]<arr[a/2])
            {mina=0;
        maxa=a;
        solve(mina,maxa);
        }




}
