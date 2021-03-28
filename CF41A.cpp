
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
string s,s2;
cin>>s>>s2;
reverse(s.begin(), s.end());
//int a= strcmp (s,s2);

if(s.compare(s2)==0)
    cout<<"YES";
else cout<<"NO";
return 0;
}/*

#include<bits/stdc++.h>
#include <cstring>
#include <iostream>

using namespace std;


int main()
{
    //char lhs[] = "Armstrong";
    string lhs="Armstrong";
    char rhs[] = "Army";
    int result;

    result = strcmp(lhs,rhs);
   cout<<result;

    return 0;
}
*/
