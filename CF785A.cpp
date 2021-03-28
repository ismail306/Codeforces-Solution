#include<iostream>
using namespace std;
int main(){
int a,c=0;
cin>>a;
string str[a];
for(int i=0;i<a;i++){
    cin>>str[i];
    if (str[i]=="Tetrahedron")
        c+=4;
         if (str[i]=="Cube")
        c+=6;
         if (str[i]=="Octahedron")
        c+=8;
         if (str[i]=="Dodecahedron")
        c+=12;
         if (str[i]=="Icosahedron")
        c+=20;

}
cout<<c;


return 0;
}
