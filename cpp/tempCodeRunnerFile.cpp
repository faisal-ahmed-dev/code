#include <iostream>
#include<string.h>
using namespace std;
 
int main()
{
 
    string a,b,c;
    unsigned long long f=0;
    cin>>a>>b;
 
    f=a.size();
 
    for(int i=0;i<f;i++)
    {
        c[i]=48+abs(a[i]-b[i]);
    }
    for(int i=0;i<f;i++)
    {
        cout<<c[i];
    }
 
    return 0;
}