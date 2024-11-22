///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n,m;
map<long,int> a;
map<long,int> b;
vector<long> ans;
int k;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    long x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>x;
        b[x]++;
    }
    for(auto i:a)
    {
        if(b[i.first]>0)
        {
            k+=min(b[i.first],i.second);
            ans.push_back(i.first);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<k<<"\n";
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}