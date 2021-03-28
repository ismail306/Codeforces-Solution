
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,i;
        cin>>n;
        i=n%2020;
        n=n-(i*2021);
        if(n>=0 && n%2020==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        /*

        if((((n%2020)%2021)==0)||(((n%2021)%2020)==0) )
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


        */


    }



}
