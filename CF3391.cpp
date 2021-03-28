#include<iostream>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str,Str;
    int j=-1,i,k;
    cin >> str;
 sort(str.begin(), str.end());
    for(i=0; i<str.length(); i++)
    {

        if(str[i]!='+')
        {
            j++;
            Str[j]=str[i];
        }

    }


    if(j==0)
        cout<<Str[j];
    else{
for(k=0;k<j;k++){
cout<<Str[k]<<"+";
}
cout<<Str[j];
    }
return 0;

}
