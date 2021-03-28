#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   int n;
   cin>>n;
   int ak47[n];
   for(int i=0;i<n;i++){
    cin>>ak47[i];
   }
   int c=0;
   for(int i=0;i<n-1;i++)
   for(int j=i+1;j<n;j++){
    if((ak47[i]&ak47[j])>=(ak47[i]^ak47[j]) )
    c++;

   }


   cout<<c<<endl;
}


}
