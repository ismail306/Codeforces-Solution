#include<iostream>
using namespace std;
int main(){
int a,b,c=0;
cin>>a>>b;
while(1){

a=a*3;
b=b*2;
if(a<=b){
    c++;
}
else
    break;
}
cout <<c +1;


}

