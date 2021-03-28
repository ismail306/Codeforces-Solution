#include<iostream>
using namespace std;
int main()
{

 int t;
 cin>>t;
 while(t--){
  int n,c=0;
  cin>>n;


 while(n>3){
  for(int i=n/2;i>1;i--){
    if((n%i)==0)
       {c++;
       n=n/i;}

  }
 if(c==0)
  {
      n=n-1;
      c++;
  }
 }

 if(n==3)
 c+=2;
 if(n=2)
    c++;

   cout<<c<<endl;
 }


}
