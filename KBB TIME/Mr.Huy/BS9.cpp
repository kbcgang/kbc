///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, a[1000000];
kien maxx,minn, vtr,ans,l,r;

int ktr(int cay)
{
    int chat = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > cay)
        {
            chat += a[i] - cay;
        }
    }
    return chat;
}

int SAW(int m, int maxx)
{
    int l = 1, r = maxx;
    int kq = -1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid) >= m)
        {
            kq = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return kq;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // if (fopen("DAYDEN.inp","r"))
    // {
    //     freopen("DAYDEN.inp", "r", stdin);
    //     freopen("DAYDEN.out", "w", stdout);
    // }
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    cout << SAW(m, maxx);
}