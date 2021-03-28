
#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
    int i,u,count=0;

   string j,a;

   cin>>j;

   int l=j.length();

  int p=(l/2)+1;

   sort(j.begin(),j.end());

   j.erase(0,p-1);

   for(i=0;i<p;i++){

        count++;

    cout<<j[i];

    if(count!=p)

    {
        cout<<"+";
    }

   }

   return 0;

}
