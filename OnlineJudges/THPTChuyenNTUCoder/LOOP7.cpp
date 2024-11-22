#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[1000005];
main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]<=0)
        {
            printf("%d",a[i-1]);
            return 0;
        }
    }
}