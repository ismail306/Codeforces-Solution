#include<iostream>
using namespace std;
int main(){
int a,c=0,m=0,b,t;
cin>>a;t=a;
while(a!=0){
   b=a%10 ;
   if(b==4||b==7)
    c++;
   m++;
    a=a/10;

}
if(c==m)
{cout <<"YES";

return 0;}
else if(t%4==0 ||t%7==0||t%44==0||t%444==0||t%77==0||t%777==0||t%47==0||t%447==0||t%447==0||t%444==0||t%74==0||t%744==0||t%774==0)
    cout<<"YES";
else
    cout<<"NO";

return 0;
}
