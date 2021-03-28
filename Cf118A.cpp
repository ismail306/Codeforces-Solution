#include<iostream>
#include<stdio.h>
#include<string>
 #include <algorithm>
using namespace std;
int main(){
string str;
cin>>str;

for (int i=0;i<str.length();i++){
if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'&&str[i]!='y'&&str[i]!='Y')
{

    if (str[i]<='Z')
        printf(".%c",str[i]+32);
else
    cout<<"."<<str[i];

}
}
printf("\n");

return 0;
}
