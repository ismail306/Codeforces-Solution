#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<(n*k-1)/((n*k-k)/k)<<endl;
	}
	return 0;
}
