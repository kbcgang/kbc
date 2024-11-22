#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,k,x;
vector<int> a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    while(n--)
    {
        cin>>x;
        if(x%k==0)
            a.push_back(x);
    }
    int ans=0;
    for(int i=0;i<a.size()-1;i++)
        for(int j=i+1;j<a.size();j++)
            if(__gcd(a[j],a[i])==k)
                ans++;
    printf("%d",ans);
}