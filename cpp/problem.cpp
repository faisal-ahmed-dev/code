#include <iostream>
#include <string>

using namespace std;

int main()
{
   int t,p=0,n=0,k=0,o=0,p1,n1,o1,arr[1000],got[1000];
   cin>>t;
   for(int i=0;i<t;i++)
   {
    cin>>arr[i];
   }
   for(int i=0;i<t;i++)
   {    
    for(int j=0;j<t;j++)
    {
    if(p!=1 &&n!=1&&o!=1 && arr[j]==1 && got[j]!=j )
    {
        p=1;
        p1=j;
        got[k]=j;
        k++;
    }
    else if(p==1 &&n!=1&&o!=1 && arr[j]==2 && got[j]!=j)
    {   
        n=1;
        n1=j;
         got[k]=j;
        k++;
    }
    else if(p==1 &&n==1&&o!=1 && arr[j]==3 && got[j]!=j)
    {
        o=1;
        o1=j;
         got[k]=j;
        k++;
    }
    else if(p==1 &&n==1&&o==1)
    {
        cout<<p1<<" "<<n1<<" "<<o1<<endl;

        p=0;n=0;o=0;
    }
    }
   }


    return 0;
}