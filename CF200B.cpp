#include<cstdio>
#include<iostream>
#include<Algorithm>
using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    int arr[t],sum=0;
    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    printf("%.12lf\n",double(sum)/t);
//cout<<double(sum)/t;
return 0;
}
