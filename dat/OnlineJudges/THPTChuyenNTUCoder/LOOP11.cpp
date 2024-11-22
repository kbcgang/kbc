#include<bits/stdc++.h>
#define int long long 
using namespace std;
long double n,s;
main()
{
    cin>>n;
    for(int i=1; ;i++)
    {
        if(s>n)
        {
            cout<<i-1;
            break;
        }
        s+=1.0/i;
    }
}