#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
 int n,m,cnt=0;
 cin>>n>>m;
 for(int i=0;i<n;i++){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b==c)
        cnt++;
 }

  if(cnt>0 && m%2==0)
        cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

}


}
