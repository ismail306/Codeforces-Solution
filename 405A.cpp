#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,val;
    cin>>n;
    vector<int>cube;
    for(int i=0; i<n; i++)
    {
        cin>>val;
        cube.push_back(val);
    }
    sort(cube.begin(),cube.end());
    for(int i=0; i<n; i++)
        cout<<cube.at(i)<<" ";



}

