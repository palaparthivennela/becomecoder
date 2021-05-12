#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r=0,a;
    cin>>n;
    while(n>=10)
    {
    while(n)
    {
        a=n%10;
        r=r+a*a;
        n=n/10;
    }
    n=r;
    r=0;
    }
    if (n==1)
    {
       cout<<"happy number";

    }
    else
    {
       cout<<"not a happy number";
    }

    return 0;
}
