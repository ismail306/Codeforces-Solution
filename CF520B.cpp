#include<iostream>
using namespace std;
int main(){
int a,b,c=0;
cin>>a>>b;
while(a!=b){

if(a*2<=b){
a=a*2;
  c++;

}
if(a*2>b){
a--;
 c++;

}

}
cout<<c;


}
