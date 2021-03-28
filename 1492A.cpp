#include<bits/stdc++.h>
using namespace std;
long long maximum(long long x, long long y, long long z) {
	long long mx = x;

	if (y > mx) {
		mx = y;
	}

	if (z > mx) {
		mx = z;
	}

	return mx;
}

long long smallest(long long x, long long y, long long z) {

  long long  smallest = x;

  if (y < smallest)
    smallest=y;
  if(z < smallest)
    smallest=z;

  return smallest;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
     long long n,a,b,c;
      cin>>n>>a>>b>>c;
      for(long long i=0;;i++){
            if(a*i>=n ||b*i>=n||c*i>=n){
            int A,B,C;
      A=a*i-n;
      B=b*i-n;
      C=c*i-n;
      long long val;
      val = maximum(A,B,C);

      if(A<0)
        A=val+1;
      if(C<0)
        C=val+1;
        if(B<0)
        B=val+1;

        cout<<smallest(A,B,C)<<endl;
         break;
        }
      }

    }
}
