/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll ans;
struct flower
{
    int height;
    ll beauty;
};
flower h[100005];
vector<flower> a;
int ChatGPT(int x)
{
    int l = 0, r = a.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m].height > m)
            r = m - 1;
        else
            l = m + 1;
    }
    return r + 1;
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
    a.push_back(h[0]);
    for (int i = 0; i < n; i++)
        cin >> h[i].height;
    for (int i = 0; i < n; i++)
        cin >> h[i].beauty;
    for (int i = 0; i < n; i++)
    {
        if (a.back().height < h[i].height)
        {
            a.push_back(h[i]);
            a[a.size() - 1].beauty += a[a.size() - 2].beauty;
        }
        else
        {
            int m = ChatGPT(h[i].height);
            if (a[m - 1].beauty + h[i].beauty >= a[m].beauty)
            {
                a[m].beauty = a[m - 1].beauty + h[i].beauty;
                a[m].height = h[i].height;
            }
        }
    }
    for (int i = 1; i < a.size(); i++)
        ans = max(ans, a[i].beauty);
    cout << ans;
}