
#include<iostream>
#include<cmath>
using namespace std;
int main(){
//cout<<pow(10,8)<<"\n\n\n";
int b;
    cin >>b;

        int c=0;

       while(b>1) {

    if(b%6==0){
        b=b/6;

        c++;
    }
    else
    {
       b=b*2;
       c++;
       if(b>1000000000)
        {cout<<"-1"<<endl;
        continue;
        }

    }
       }

cout<<c<<endl;



}
