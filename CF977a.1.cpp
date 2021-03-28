#include<iostream>
using namespace std;
/*
devid(int n,int l,int k)
{
    for(int j =1; j<=k-l; j++)
    {
        n=n/10;
        l++;
        if(n%10!=0)
            decrement (n,l,k);
    }
}
decrement(int n ,int l,int k)
{

    for(int i=1; i<=k; i++)
    {
        n--;
        l++;
        if(n%10==0)
        {
            devide(n,l,k);

        }
    }
}

*/

    int main()
    {
        int n,k,l=0;
        cin>>n>>k;

        if(n%10!=0)
        {
            for(int i=1; i<=k; i++)
    {
        n--;
        l++;
        if(n%10==0)
        {
            n/=10;

        }
           if(n%10!=0)
                continue;


        }
        }

        if(n%10==0)
            devid( n,l.k)
            cout<< n;
    }

    /*511 1
    510 2
    51  3
    50  4*/

