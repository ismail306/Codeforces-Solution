#include<bits/stdc++.h>
using namespace std;
int main(){

int n,nosr,a,srfee,j;
cin>>n>>nosr>>a>>srfee;



/*if(nosr>n)
{
    swap (nosr,n);
    double f=min((double)nosr*a,(((double)nosr/n)*srfee));
    cout<<(int)f+(n%nosr)*min(a,srfee)<<endl;
    return 0;
}*/
int k=min(n*a,(n/nosr)*srfee);
//cout<<k<<endl;
cout<<k+min(n%nosr*a,srfee)<<endl;

}
