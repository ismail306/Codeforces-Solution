#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;
int b;
while(a--){
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
       if(b>1000000000)
        { cout<<"-1"<<endl;
        continue;
        }
       c++;
    }
}
//cout<<b<<"\n\n\n";
if(b>0)
cout<<c<<endl;


}


}
