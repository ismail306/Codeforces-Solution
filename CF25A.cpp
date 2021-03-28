#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,e=0,o=0,i,j;
    cin>>a;
    int arr[a],arra[a];
    for(i=0; i<a; i++)
    {
        cin>>arr[i];
       // arra[i]=arr[i]
    }

    for(j=0;j<a;j++){
        if(arr[j]%2==0)
            e++;
        if(arr[j]%2!=0)
            o++;
        if(e>o&&o>0)
        {
            cout<<j+1;
            break;
        }
        if(o>e&&e>0)
        {cout<<j+1;
            break;
        }
        if(e==o&&arr[j+1]%2==arr[j-1]%2)
        {cout<<j+1;
        break;}
        if(e==o&&arr[j+1]%2!=arr[j-1]%2)
            {cout<<j;
        break;}

    }
    // int  result = find(arr.begin(), arr.end(),arr );
    //cout<<i+1;




    return 0;
}
