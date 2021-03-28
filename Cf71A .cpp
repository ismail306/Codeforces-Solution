#include<iostream>
using namespace std;
int main(){
string str;
int n;
cin>>n;
for(int i=0;i<n;i++){
cin>>str;
if (str.size()>10){
cout<<str.at(0)<<str.size()-2<<str.at(str.length()-1)<<endl;
}
else{


    cout<<str<<endl;
}
}

}

