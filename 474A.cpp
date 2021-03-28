#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
string str1,str2,str;

cin>>c>>str;
str1="qwertyuiopasdfghjkl;zxcvbnm,./";
if(c=='R'){
for(int i=0;i<str.size();i++){
    for(int j=0;j<30;j++)
    {
        //if((str[i].compare(str1[j])) == 0)
        if((int)(str[i])==(int)(str1[j]))
        {cout<<(str1[j-1]);
        break;}

    }

}
}
else{
for(int i=0;i<str.size();i++){
    for(int j=0;j<30;j++)
    {
        //if((str[i].compare(str1[j])) == 0)
        if((int)(str[i])==(int)(str1[j]))
        {cout<<(str1[j+1]);
        break;}

    }

}
}

   // cout<<"R";




}
