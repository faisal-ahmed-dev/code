#include<bits/stdc++.h>
using namespace std;


int main()
{
    string in;
    int count=0;
    cin>>in;
    int n=in.size();
    for(int i=0;i<n;i++)
    {
        if(in[i]=='-')
        {
            count++;
            if(count==2)
            {
                cout<<count;
                count=0;
            }
        }
        else
        {
           cout<<count;
           count=0;

        }
    }


}