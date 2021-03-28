
#include<bits/stdc++.h>
using namespace std;
void solve(int x)
{
    vector <int> a;
    for(int j=9; j>=1; j--)
    {
        if (x - j >= 0)
        {
            a.push_back(j);
            x -= j;
        }
    }
    if (x == 0)
    {
        for (int i = a.size() - 1; i >= 0; i--)
        {
            cout << a[i];
        }
        cout << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }



}




int main()
{
    int  t;
    cin>>t;
    while(t--)
    {

        int x;
        cin>>x;
        if(x<=9)
            cout<<x<<endl;

        //if (x>9 && x<18)
        else
            solve(x);

    }

}
