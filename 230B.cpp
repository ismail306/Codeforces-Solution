#include<iostream>
using namespace std;
int main(){
long long t;
 cin>>t;
while(t--){
    long long n,c=0,i;
  cin>>n;
   for( i=1;i<=n;i++)
   {
       if(n%i==0)
    c++;

    if(c>3)
      break;

      }
    if(c==3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
}
