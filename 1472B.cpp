#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  int arr[n],sum=0,tw=0;;
  for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
if(arr[i]==2)
tw++;
  }
  double s;
  s=sum/2.0;
  if(tw%2!=0 && n%2!=0)
    cout<<"NO"<<endl;
   else if((n%2!=0&&sum%2!=0) ||((s!=sum/2)&& n%2 ==1)||((sum%2==0)&& n%2 ==1))
        cout<<"NO"<<endl;
   else
    cout<<"YES"<<endl;
}




}
