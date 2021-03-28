#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
        cout<<-1;
    else
    {
        int a=1;
        while(n)
        {
            cout<<n<<" ";
n--;
        }
    }
}
