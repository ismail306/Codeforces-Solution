

#include<bits/stdc++.h>
using namespace std;
string s;
int n,q1,q2;
main(){
	cin>>s;
	int a[s.size()];
	a[0]=0;
	for(int i=0;++i<s.size();)
	{a[i]=a[i-1]+(s[i]==s[i-1]);
	cout <<a[i]<< endl; }
	for(cin>>n;n--;)
	{cin>>q1>>q2;
	cout<<a[q2-1]-a[q1-1]<<"\n";

	}
}
