#include<iostream>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m;
    if(n<m)
        cout<<-1<<endl;
    else
    {
        if(n%2==0)
             k=0;
        else
            k=1;

        for(int i=n/2,j=k;; i--,j+=2)
        {
            if((i+j)%m==0)
            {
                cout<<i+j;
                break;
            }

        }

    }

}
