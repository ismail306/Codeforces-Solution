#include<bits/stdc++.h>

using namespace std;

LCM(int aa,int bb)
{
    int lcm;
    if(aa>bb)
        lcm = aa;
    else
        lcm = bb;
    while(1)
    {
        if( lcm%aa==0 && lcm%bb==0 )
        {
            // cout<<"The LCM of "<<aa<<" and "<<bb<<" is "<<lcm;
            return lcm;
            break;
        }
        lcm++;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        // vector<string>str1;
        //     vector<string>str2;

        string a,b1,b,a1;

        cin>>a>>b;
        a1=a;
        b1=b;

        int LcM=LCM(a.size(),b.size());
//std::lcm(a.size(),b.size());
        for(int i=1; i<LcM/a.size(); i++)
        {
            a1+=a;

        }
//cout<<a1<<endl;
//<<a.size()<<endl<<a1.size()<<endl<<b.size()<<endl<<b1.size()<<endl;

        for(int i=1; i<LcM/b.size(); i++)
        {

            b1+=b;
            // cout<<b1<<endl;
        }

        //cout<<b1<<endl;
        if((a1.compare(b1)) == 0)
        {
            cout<<a1<<endl;

            /*if(a.size()>b.size() &&(a.size()%b.size() )==0 )
                cout<<a<<endl;
            else if(a.size()<=b.size() &&(b.size()%a.size() )==0 )
                cout<<b<<endl;
            else if(a.size()>b.size() &&(a.size()%b.size() )!=0 ){
                for(int i=0;i<(a.size()/b.size());i++)
                cout<<a;
                cout<<endl;
            }
            else if(a.size()<=b.size() &&(b.size()%a.size() )!=0 ){
                for(int i=0;i<((b.size()+(a.size()-1))/a.size());i++)
                cout<<b;
                cout<<endl;
            }*/
        }
        //cout<<""<<endl;
        else
            cout<<-1<<endl;


    }



}
