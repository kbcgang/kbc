/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
struct gift
{
    ll tag, val;
};
gift x;
ll ans = -inf;
vector<gift> a;
int st;
ll maxx;
int ChatGPT(ll x)
{
    int l = st, r = a.size() - 1, pos = a.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m].tag >= x)
            l = m + 1;
        else
        {
            pos = m;
            r = m - 1;
        }
    }
    return pos;
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
    cin >> n;
    while (n--)
    {
        cin >> x.tag >> x.val;
        if (x.tag <= a.back().tag && a.empty())
        {
            a.push_back(x);
            if (a.back().val >= maxx)
            {
                maxx = a.back().val;
                st = a.size() - 1;
            }
        }
        else
        {
            int pos = ChatGPT(x.tag);
            a[pos].tag = x.tag;
            a[pos].val+=x.val;
            if(a[pos].val>=maxx)
            {
                maxx=a[pos].val;
                st=pos;
            }
        }
    }
    cout<<maxx;
}