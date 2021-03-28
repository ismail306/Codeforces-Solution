#include<bits/stdc++.h>
using namespace std;
int main(){

int n, k, l, c, d, p, nl, np;
cin>> n>> k>> l>> c>>d>>p>>nl>>np;
int AK47[3];
AK47[0]=((k*l)/nl)/n;
AK47[1]=(c*d)/n;
AK47[2]=(p/np)/n;

cout<<*min_element(AK47,AK47+3);

return 0;
}
