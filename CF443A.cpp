#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s,str;
getline(cin,s);
int j=0;
    sort(s.begin(),s.end());
for(int i=0;i<s.length();i++){

    if(s[i]>=97&&s[i]<=122)
    {
        if(s[i]!=s[i+1])
            j++;
}


}
cout<<j;

}
