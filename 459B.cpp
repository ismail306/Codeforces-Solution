#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,mxv=0,mnv=0,mx,mn;
    cin>>n;
    int b[n];
    for(int i=0; i<n; i++)
        cin>>b[i];
    mx=*max_element(b,b+n);
    mn=*min_element(b,b+n);
    if(mx==mn)
        {
            cout<<0 <<" "<<n*(n-1)/2<<endl;
    return 0;}
    else{
    for(int i=0; i<n; i++)
    {
        if(b[i]==mx)
            mxv++;

        else if(b[i]==mn)
            mnv++;


    }

    cout<<mx-mn<<" "<<mxv*mnv;


    }


}
