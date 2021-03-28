#include<bits/stdc++.h>
using namespace std;
vector<int>vec1,vec2,tempvec;
int main()
{
    int n,m,a,l;
    cin>>n>>m;

    for(int i=0; i<n; i++ )
    {

        cin>>a;
        vec1.push_back(a);

    }


    for(int i=0; i<m; i++ )
    {

        cin>>l;
        vec2.push_back(l);

    }

    for(int i=0; i<m; i++)
    {
        int cnt=n-(vec2.at(i)-1);
        tempvec=vec1;
        sort(tempvec.begin()+vec2.at(i)-1,tempvec.end());
        for(int j=vec2.at(i)-1; j<n-1; j++)
        {
            if(tempvec.at(j)==tempvec.at(j+1))
                cnt--;

        }
        cout<<cnt<<endl;
        tempvec.clear();
    }
}
