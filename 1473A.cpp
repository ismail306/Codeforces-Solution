#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k,v,b=0;
    cin>>n>>k;
    vector <int> arr1;
      //  vector <int> arr2;

    for(int i=0;i<n;i++){
       cin>> v;
       if(v>k){
       b=v;
       }
       else
               arr1.push_back(v);


    }
    if(n<=2|| arr1.size()<=1)
        {cout<<"NO"<<endl;
    continue;}
     sort(arr1.begin(), arr1.end());
     //cout<<(arr1.at(0)+arr1.at(1))<<endl;
   // sort(arr1,arr1+(arr1.size()));
    if(b==0)
    {cout<<"YES"<<endl;
    continue;}
    else if((arr1.at(0)+arr1.at(1))<=k)
    cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

}

}
/*3 4
5 1 1
3 5
5 1 1
3 1
1 2 2
3 2
2 2 1
3 3
1 2 2
3 4
2 1 2
3 5
2 2 1
3 1
2 1 3
3 2
3 2 1
3 3
1 2 3
3 4
1 3 2
3 5
3 1 2*/
