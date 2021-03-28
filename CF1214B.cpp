#include<iostream>
using namespace std;
int main(){

int b,g,n,c=0;;
cin>>b>>g>>n;

for(int i=0;i<=b;i++)
{
    for(int j=0;j<=g;j++)
   {if((i+j)==n)
c++;
   }
}
cout<<c;
}
/*
5 0 1 2 3
6 3 2 1 0
3 3 3 3 3

5 2 3 4 5
3 3 2 1 0
5 5 5 5 5
*/
