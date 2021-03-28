#include<iostream>
using namespace std;
int main(){
int t,x,a,b,s=0,i=1;
cin>>t>>x;
while(t--){
        cin>>a>>b;
for(;i<=a;i+=x){
    if(i+x>a){
       s+=((b-i)+1);
       i=b+1;
       break;
    }


}

}
cout<<s;


}
