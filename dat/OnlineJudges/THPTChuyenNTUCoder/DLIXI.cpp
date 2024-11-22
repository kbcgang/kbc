#include<bits/stdc++.h>
#define int long long 
using namespace std;
int c,a,b;
main()
{
    cin>>a>>b>>c;
    int ans=0;
    for(int i=a;i<=b;i++)
        if(i%c==0)
            ans++;
    cout<<ans;
}