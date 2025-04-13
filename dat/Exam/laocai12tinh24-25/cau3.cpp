/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
struct dot
{
    int pos;
    bool cl;
};
bool compare(dot a,dot b)
{
    if(a.pos==b.pos)return a.cl<b.cl;
    return a.pos<b.pos;
}
dot a[200005];
int n;
int ans;
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
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].pos;
        a[i].cl = 0;
    }
    for (int i = n + 1; i <= 2 * n; i++)
    {
        cin >> a[i].pos;
        a[i].cl = 1;
    }
    sort(a + 1, a + 1 + 2 * n,compare);
    for (int i = 1; i < 2 * n; i++)
        if (a[i].cl != a[i + 1].cl)
        {
            ans++;
            i++;
        }
    cout << ans;
}