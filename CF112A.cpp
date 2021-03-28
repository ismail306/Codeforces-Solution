#include<iostream>

using namespace std;
int main(){
string str,str2;
int s1=0,s2=0;
cin>>str>>str2;
for(int i=0;i<str.length();i++)
{
if(str[i]<='Z')
  {
   str[i]=str[i]+32;
  }
  }
for(int j=0;j<str2.length();j++)
{
if(str2[j]<='Z')
  {
   str2[j]=str2[j]+32;
  }
  }


if(str==str2)
    cout<<0;

if(str<str2)
    cout<<-1;

if(str>str2)
    cout<<1;


return 0;
}
