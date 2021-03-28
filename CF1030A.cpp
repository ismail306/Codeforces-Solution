#include<iostream>
using namespace std;
int main()
{
int a;
cin>>a;
int arr[a];
for(int i=0;i<a;i++){
   cin>>arr[i];


}
if(arr[a-1]==0)
cout<<"EASY";
else
    cout<<"HARD";
return 0;

}
