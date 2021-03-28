#include<iostream>
using namespace std;
int main(){
string ak47,AK47[5];
int c=0;
cin>>ak47;
for(int i=0;i<5;i++){
   cin>>AK47[i];
   //cout<<ak47[0]<<ak47[1]<<endl;
   //cout<<char(AK47[i][0])<<AK47[i][1]<<endl;
   //if((ak47[0])==AK47[i][0]||(ak47[0]==AK47[i][1]))
   //if('A'=='A')
   // cout<<"YES"<<endl;
if((ak47[0]==AK47[i][0])||(ak47[0]==AK47[i][1])||(ak47[1]==AK47[i][0])||(ak47[1]==AK47[i][1]))
    c++;

}
if(c>0)
    cout<<"YES";
else
    cout<<"NO";


}
