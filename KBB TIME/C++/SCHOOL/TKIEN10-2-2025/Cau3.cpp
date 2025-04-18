/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

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
JAV()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].x;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].y;
        if (a[i].y < a[i].x)
        {
            swap(a[i].x, a[i].y);
        }
    }
    sort(a + 1, a + n + 1, compare);
    int last = a[1].y;
    for (int i = 2; i <= n; i++)
    {
        if (a[i].x > last)
        {
            k++;
            last = a[i].y;
        }
    }
    cout << k;
}