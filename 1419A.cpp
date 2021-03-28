//kire mehedi dekhte aisos kmne submit korlam..?
// 20% copy,tbe tor ta na.toie seraa vai....😍😂🤣
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin>>i;
    while(i--)
    {
        int t,a,c=0;
        cin>>t;
        string ak47;
        cin>>ak47;
        if((a%2)==0)
           {
               c=1;
               for(int i=1;i<t;i+=2)
                if(ak47[i]%2==0)
                {c=0;
                break;}
           }
            else
             {
               for(int i=0;i<t;i+=2)
                if(ak47[i]%2!=0)
                {c=1;
                break;}
           }
           if(c==1)
           cout<<1<<endl;
           else
cout<<2<<endl;

    }
}
