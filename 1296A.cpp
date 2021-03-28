#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int a,sum=0,e=0,o=0;
  cin>>a;
  int arr[a];
  for(int i=0;i<a;i++)
  {
      cin>>arr[i];
      sum+=arr[i];
      if(arr[i]%2==0)
        e++;
      else
        o++;
  }
if(sum%2!=0|| (e>0&&o>0))
  cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

}


}
