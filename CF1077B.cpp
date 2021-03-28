#include<iostream>
using namespace std;
int main()
{

    int a,c=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
       cin>>arr[i];

    }
    for(int i=1;i<a-1;i++)
    {
        if(arr[i-1]==1&&arr[i]==0&&arr[i+1]==1){
            arr[i+1]=0;
            c++;
        }
    }
    cout<<c;
}
/*  1 1 0 1 1 0 1 0 1 0
i=1;1 1 0 1 1 0 1 0 1 0
i=2;1 1 0 0 1 0 1 0 1 0 &&c==1
i=3;1 1 0 0 1 0 1 0 1 0
*/
