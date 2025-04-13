/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, x;
vector<int>  a,ans,b;
ll m;
ll dao(ll n)
{
    ll s = 0;
    while (n > 0)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s;
}
void take()
{
    while(m>0)
    {
        b.push_back(m%10);
        m/=10;
    }
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    take();
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int l=0;
    while(ans.size()<b.size())
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[l])
            {
                ans.push_back(a[i]);
                a.erase(a.begin()+i);
                break;
            }
        }
        l++;
    }
}