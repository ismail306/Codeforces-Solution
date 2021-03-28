#include <bits/stdc++.h>
using namespace std;

int middleOfThree(int a, int b, int c)
{
    // Checking for b
    if ((a < b && b < c))
       return b-a+c-b;
   else if (c < b && b < a)
       return b-c+a-b;

    else if ((b < a && a < c))
       return a-b+c-a;
    else if (c < a && a < b)
       return a-c+b-a;
   else if ((b < c && c < a))
       return c-b+a-c;
    else if (a < c && c < b)
       return c-a+b-c;

}

// Driver Code
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout << middleOfThree(a, b, c);
    return 0;
}
