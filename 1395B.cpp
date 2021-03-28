#include<iostream>
using namespace std;
int main(){
int n,m,x,y;
cin>>n>>m>>x>>y;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

        cout<<x<<" "<<y<<endl;

    if(j!=m-1)
			y=y%m+1;
		}
		x=x%n+1;
}




}

