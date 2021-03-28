#include<iostream>
using namespace std;
int main(){
    int a;
string str;
cin>>a>>str;
int z=0,o=0;
//cout<<str[0];
for(int i=0;i<str.length();i++)
{

if(str[i]=='0')
    z++;
   // cout<<z;
else o++;
}
cout<<abs(z-o);

}
