#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int x,y,L,R,U,D,r=0,l=0,u=0,d=0;
        cin>>x>>y;
        if(x<0)
            L=abs(x);
        if(x>0)
            R=abs(x);
        if(y<0)
            D=abs(y);
        if(y>0)
            U=abs(y);

        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='L')
                l++;
            if(s[i]=='R')
                r++;
            if(s[i]=='D')
                d++;
            if(s[i]=='U')
                u++;
        }

        if(x>=0 && y>=0 && r>=R && u>=U)
        {
            cout<<"YES"<<endl;
        }
        else if(x<=0 && y<=0 &&l>=L && d>=D)
        {
            cout<<"YES"<<endl;
        }
        else if(x<0 &&y>=0 && l>=L && u>=U)
            cout<<"YES"<<endl;
        else if(x>=0 &&y<0 &&r>=R && d>=D)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }


}
