#include<bits/stdc++.h>

using namespace std;
vector<string>str1;
vector<string>str2;
//efkjrgkrtkfjj
checker(string s){
    int c,im;
    char ch1,ch2;
string st="abcdefghijklmnopqrstuvwxyz";
if(s[0]=='a')
    ch1='b';
    else ch1='a';
/*
for(int i=0;i<=25;i++){
c=0,im=0;
        for(int j=0;j<s.size();j++){
                if(s[j]=='a'&&s[j+1]=='b'){
                    //char ch3='a';
                    im++;
                }
            if(st[i]==s[j])
               break;
               else
                c++;
              }
              if(c==s.size())
               { ch1=st[i];
               break;
               }

        }*/


//if{s[0]=='a'}
for(int i=25;i>=0;i--){
c=0;
        for(int j=0;j<s.size();j++){
            if(st[i]==s[j])
               break;
               else
                c++;
              }
              if(c==s.size())
               { ch2=st[i];
               break;
               }

        }
        //if(im>0)
         //   ch1='a';

    for(int i=0;i<s.size();i++){
            if(i%2==0)
        cout<<ch1;
        else cout<<ch2;


}
cout<<endl;
}






int main(){
int t;
cin>>t;
while(t--){

  string s;
  cin>>s;
   checker(s);
}

}
