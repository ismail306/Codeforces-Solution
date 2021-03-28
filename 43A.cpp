#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
string s[t],str;
for(int i=0;i<t;i++){
   cin>>s[i];

}
int c=0;
for(int i=1;i<t;i++){

    if(s[0]==s[i])
        c++;
        else
            str=s[i];


}
if(c>=t/2)
    cout<<s[0];
else
    cout<<str;

}
