#include<iostream>
using namespace std;
int main(){
int n,c=0;
cin>>n;
char ch[n];
cin>>ch;
//cin.getline(ch,n);
//to scan sentence
for(int i=1;i<n;i++){
  if(ch[i]==ch[i-1])
        c++;
}
cout<<c<<endl;
return 0;}
