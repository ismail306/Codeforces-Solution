#include<iostream>
using namespace std;
int main(){
    //while(1){
    int t,f=0,th=0,tw=0,o=0,sum;
cin>>t;
int AK47[t];
for(int i=0;i<t;i++){
    cin>>AK47[i];
    if(AK47[i]==4)
        f++;
   else if(AK47[i]==3)
    th++;
  else  if(AK47[i]==2)
        tw++;
else o++;


}

if(th<o)
{
f+=th;
o-=th;
th=0;
}
if(th>=o)
   {
    f+=th;
    o=0;

   }
    if(tw%2==0){

       f+=tw/2;
        tw=0;
    }
if(tw%2!=0){

       f+=tw/2;
        tw=1;
        if(o>2){
        f+=1;
        o-=2;
        tw=0;

    }
     if(o<=tw){
        f+=1;
        o=0;
        tw=0;

    }

    }






    if(o%4==0){
        f+=o/4;
        }
     if(o%4!=0){
        f+=(o/4)+1;
        }

cout<<f<<endl;

}



