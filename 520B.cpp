#include<bits/stdc++.h>
using namespace std;
int result=0,k;
vector<float> decO;
/*checker(int){







}*/


int main()
{

    float cv,t;
    cin>>cv>>t;
    if(t<=cv)
        cout<<cv-t;
    else{
        decO.push_back(t);
        for(float i=t;i>cv;)
        {
            i=ceil(i/2);
            decO.push_back(i);

                    }

        result=cv-decO.at(decO.size()-1);
       for(k=decO.size()-1;k>0;k--){

        if(2*decO.at(k)>=decO.at(k-1))
        {
            result++;
            result+=(2*decO.at(k)-decO.at(k-1));

        }
        //checker();



       }

                    //for(int i=0;i<decO.size();i++)
                        cout<<result<<endl;











    }

return 0;
}

