#include<iostream>
using namespace std;
int main(){

int a,d=0,s,S;
cin>>a;
char ch[a][a];
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        cin>>ch[i][j];
        }
}

int k=a-1,c=0,c1=0,j;
for(int i=0;i<a;i++){
        for(j=0;j<a;j++){
        if(ch[i][i]==ch[0][0]&& ch[i][a-1-i]==ch[0][0])
            c++;
        if(ch[i][j]==ch[0][1]&&ch[0][1]!=ch[0][0])
        c1++;
    }
}
//cout<<"C   =" <<c<<endl;
//cout<<"C1   =" <<c1<<endl;

    if(c==a*a&&c1==(c-(a*2-1)))
        cout<<"YES";
    else
        cout<<"NO";

}
