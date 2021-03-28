#include<iostream>
using namespace std;
int main(){
int arr[5][5];
for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++){

    cin>>arr[i][j];
    }
    }
    if(arr[2][2]==1)
        cout<<"0";
else    if (arr[0][0]==1 || arr[0][4]==1||arr[4][0]==1||arr[4][4]==1)
    cout<<"4";
    else if(arr[1][1]==1||arr[1][3]==1||arr[3][1]==1||arr[3][3]==1||arr[0][2]==1||arr[4][2]==1||arr[2][4]==1||arr[2][0]==1)
    cout<<"2";
    else if(arr[1][2]==1||arr[2][3]==1||arr[2][1]==1||arr[3][2]==1)
    cout<<"1";
else
    cout<<"3";

return 0;
}
