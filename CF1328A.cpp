#include<iostream>
using namespace std;
int main(){
long long t, a,b;
cin>>t;
for(int i=0;i<t;i++){

   cin>>a>>b;
    if(a%b==0)
        cout<<"0"<<endl;
    else
    {

       cout<<b-a%b<<endl;
    }


}


}
