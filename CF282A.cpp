#include<iostream>
using namespace std;
int main(){
int i=0,j,t;
cin>>t;
for(j=0;j<t;j++){
string ch;
cin>>ch;
if(ch=="++X")
    ++i;
    if(ch=="--X")
    --i;
    if(ch=="X++")
    i++;
    if(ch=="X--")
    i--;

}
cout<<i<<endl;

return 0;}
