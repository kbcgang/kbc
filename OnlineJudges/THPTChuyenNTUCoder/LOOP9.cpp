#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n;
int s=1;
main()
{
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
        {
            s+=i+n/i;
            if(i*i==n)
                s-=i;
        }
    if(n==s)
        printf("YES");
    else printf("NO");
}