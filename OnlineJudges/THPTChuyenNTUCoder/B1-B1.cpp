#include<bits/stdc++.h>
#define int long long 
using namespace std;
int tongcs(int n)
{
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int n,x,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>x;
        ans+=x;
    }
    cout<<tongcs(ans);
}