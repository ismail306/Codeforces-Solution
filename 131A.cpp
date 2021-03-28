#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //cout<<(char)(s[0]-32)<<endl;

    for(int i=1; i<s.size(); i++)
    {

        if((int)s[i]>96)
        {
            cout<<s;
            //break;
            return 0;
        }
    }

    if((int)s[0]>=97)
        cout<<(char)(s[0]-32);
    else
        cout<<(char)(s[0]+32);
    for(int i=1; i<s.size(); i++)
        cout<<(char)(s[i]+32);



}





