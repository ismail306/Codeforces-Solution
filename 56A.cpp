#include<bits/stdc++.h>
using namespace std;
int main(){
int a,c=0;
cin>>a;
while(a--){
  string s;
  cin>>s;
  if(s[0]<64)
{stringstream geek(s);
    int x = 0;
    geek >> x;
    if(x<=17)
           c++;}
  //cout<<s[0];}
  else if (s=="ABSINTH"||s=="BEER"||s=="BRANDY"||s=="CHAMPAGNE"||s=="GIN"||s=="RUM"||s=="SAKE"||s=="TEQUILA"||s=="VODKA"||s=="WHISKEY"||s=="WINE")
    c++;



}
cout<<c;

}
