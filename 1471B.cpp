#include<bits/stdc++.h>
using namespace std;
int t,k,x,sum;
vector <int>rob;


checker (int a){
    for(int i=1;i<=x;i++){
rob.push_back(a);
//rob.push_back(a);
    }
  sum+=x*a;

 k+=x;

  }

  int main(){
cin>>t;
while(t--){
        rob.clear();
sum=0;
  int n,a;
  cin>>n>>x;

  k=n;

  for(int i=0;i<n;i++){
    cin>>a;
rob.push_back(a);
    sum+=a;
  }
   for(int i=0;i<k;i++)
   {

   if(rob.at(i)%x==0)
    checker((rob.at(i))/x);
    else
        break;
   }
cout<<sum<<endl;
}



}
