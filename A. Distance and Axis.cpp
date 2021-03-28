#include<iostream>
using namespace  std;
int main(){
int a;
cin>>a;
while(a--){
int b,c;
  cin>>b>>c;
   if(b==1 &&c==0)
    cout <<1<<endl;
  else if(c>=b)
    cout<<c-b<<endl;
  else if (c==0)
    cout <<"0"<<endl;


}

}
