#include<iostream>
using namespace std;
int main(){
int s,c=0;
cin>>s;
string str;
cin>>str;
for(int i=0;i<s;i++){
    if(str[i]=='x'&& str[i+1]=='x'&& str[i+2]=='x')
        c++;
}
cout<<c;

return 0;
}
