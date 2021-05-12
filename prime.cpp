
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i;
    cin>>n;
    for (i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }

      if (count==0)
       {
          cout<<"prime";
       }
       else
       {
         cout<<"not prime";
       }
       return 0;
}
