#include<iostream>
using namespace std;
int main(){

int a,b,sum,e;
cin>>a>>b;
sum=a;
e=a;
if(a<b)
    {cout<<a;
    return 0;}
while(e>0) {

a=a-b+1;
sum++;
e=a/b;
}
if(a==b)
    cout<<sum+1;
else
    cout<<sum;

return 0;
}
/*a=3 sum =5 e= 1
a=2 sum =6 e= 0

a=4 sum=7 e=1
a=2 sum=8 e=0
*/
