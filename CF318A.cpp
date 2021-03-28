#include<iostream>
using namespace std;
int main(){

long long a,b,k,j,i;
cin>>a>>b;
 j=0;
long long arr[a];

for(i=1;i<=a;i=i+2)
   {
    arr[j]=i;
    j++;
       }


for(k=2;k<=a;k=k+2)
{
   arr[j]=k;
   j++;
}
cout<<arr[b-1];
}
