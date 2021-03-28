#include<iostream>
using namespace std;
#define EL endl;
int main(){
int a,b;
cin>>a>>b;
for(int i=1;i<=a;i++){
for(int j=1;j<=b;j++){
   if((i%2)!=0)
    cout<<"#";
  else{
   if((j==1)&&(i%4)==0)
    cout<<"#";
 else if((j==b)&&(i%4)!=0)
    cout<<"#";
   //if(j!=1||j!=b)
 else
    cout<<".";
    }
}
cout<<EL;
}

}
