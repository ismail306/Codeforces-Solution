#include<iostream>
using namespace std;
int main(){
long long  i,n,m,s;

cin>>n;
if(n%2==0){
   s=(n/2)*((n/2)+1);
    m=(n/2)*(n/2);

}
else{
  s=(n/2)*((n/2)+1);
  m=((n/2)+1)*((n/2)+1);


}
cout<< -m+s <<endl;
}




/*}
30 25
20 25
20 16
12 16
12 9
6 9
6 4
2 4
2 1
0 1*/
