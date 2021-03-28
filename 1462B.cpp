#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string str;
        cin>>n>>str;
        if(str[0]-48==2 && str [n-3]-48==0&& str [n-2]-48==2&& str [n-1]-48==0)
            cout<<"YES"<<endl;

        else if(str[0]-48==2 && str [1]-48==0&& str [n-2]-48==2&& str[n-1]-48==0)
            cout<<"YES"<<endl;
        else if(str[0]-48==2 && str [1]-48==0&& str [2]-48==2&& str [n-1]-48==0)
            cout<<"YES"<<endl;
        else if(str[0]-48==2 && str [1]-48==0&& str [2]-48==2&& str [3]-48==0)
            cout<<"YES"<<endl;

        else if(str[n-4]-48==2 && str [n-3]-48==0&& str [n-2]-48==2&& str [n-1]-48==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




}
