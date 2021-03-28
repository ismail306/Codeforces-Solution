#include<iostream>
using namespace std;
int main(){
int n,m,k;
cin>>n>>m>>k;
while(k--){
        int x1,y1;
  cin  >>x1>>y1;
for(int i=x1;i<=n;i++)
    for(int j=y1;j<=m;j++)
        cout<<i<<" "<<j;

}


}
