
#include<iostream>
using namespace std;
solve(int n){
        string str[10] = {"O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O", "O-|OOOO-","-O|-OOOO", "-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};

cout<<str[n]<<endl;

}


int main()
{
        int n;
        cin>>n;
        if(n==0)
            {
                solve(n);
            }

        while (n>0){
            solve(n%10);
            n/=10;

        }


}
