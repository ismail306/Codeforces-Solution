#include<iostream>
using namespace std;
int main(){
int i,n,s;
cin>>n;
unsigned long long int arr[n];
for(i=0;i<n;i++)
{
    cin>>arr[i];
    s=0;
    for(int j=1;j<=arr[i];j++){
    if(arr[i]%j==0)
       {

        s++;
        //if(s>4)
          //  break;
          }
        }
    if(s==3)
        cout<<"YES"<<endl;
    else
        cout<< "NO"<<endl;



}



}
