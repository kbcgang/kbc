/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int a[100005];
int gpt(int x, int y, int z)
{
    if (x < y)
        swap(x, y);
    if (x < z)
        swap(x, z);
    if (y < z)
        swap(y, z);
    return y;
}
int kbc(int x,int y)
{
    if(x<y)swap(x,y);
    return y;
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
    int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ans=min(a[0], a[1]);
    for (int i = 1; i < n; i++)
        ans = max({ans, gpt(a[i - 1], a[i], a[i + 1]),kbc(a[i],a[i+1])});
    cout << ans;
}