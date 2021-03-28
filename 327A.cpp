#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n],c=0;
for(int j=0;j<n;j++)
    cin>>arr[j];

for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
      c++;
if(arr[i]==1 && arr[i+1]==1)
   c++;
    }
    cout <<c;
}
