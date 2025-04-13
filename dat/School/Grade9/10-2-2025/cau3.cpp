/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
struct pos
{
    int x, y;
};
int n, k = 1;
pos a[100005];
bool compare(pos a, pos b)
{
    if (a.y == b.y)
        return a.x < b.x;
    return a.y < b.y;
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
    for (int i = 1; i <= n; i++)
        cin >> a[i].x;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].y;
        if (a[i].y < a[i].x)
            swap(a[i].x, a[i].y);
    }
    sort(a + 1, a + n + 1, compare);
    int last = a[1].y;
    for (int i = 2; i <= n; i++)
        if (a[i].x > last)
        {
            k++;
            last = a[i].y;
        }
    cout << k;
}