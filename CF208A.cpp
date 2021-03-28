#include<iostream>
using namespace std;
int main()
{
    string str;
    int j=0;
    cin>> str;
    for(int i=0; i<str.length();)
    {
        if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
        {
            j++;
            i=i+3;
            continue;

        }
        else
        { if(j>0 )
        cout<<" ";
            cout<<str[i];

            j=0;
            i++;
             }
            }
    }

//WUBWUB ARE WUB WUB THE WUB CHAMPIONS WUB MY WUB FRIEND WUB


