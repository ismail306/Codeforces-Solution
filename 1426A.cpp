#include<iostream>
#include <cmath>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
  int n,x,c=0;
  cin>>n>>x;
   if(n==1)
   {cout<<n<<endl;
  }

   else{
        int i;
   for( i=2;i<=n;i=i+x)
    c++;
    //cout<<i<<"\n";
    if((i-x)==n)
   cout<<c<<endl;
   else
    cout<<c+1<<endl;
   }
}



}
