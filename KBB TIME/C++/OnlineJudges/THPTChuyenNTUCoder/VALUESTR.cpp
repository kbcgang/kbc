/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, fb[Million + 5], fa[Million + 5];
string s;

bool ktr(kien mid)
{
    kien vtr = 0;
    if (fa[mid - 1] * fb[mid - 1] > k)
    {
        return false;
    }
    else
    {
        for (int i = mid; i < s.size(); i++)
        {
            vtr = (fa[i] - fa[i - mid + 1]) * (fb[i] - fb[i - mid + 1]);
            if (vtr > k)
            {
                return false;
            }
        }
        return true;
    }
}

kien tknp()
{
    kien l = 1, r = s.size();
    kien mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid))
        {
            l = mid + 1;
            kq = mid;
        }
        else {
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
    cin >> n >> k;
    cin >> s;
    if (s[0] == 'a')
    {
        fa[0]++;
    }
    else if (s[0] == 'b')
    {
        fb[0]++;
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            fa[i] = fa[i-1] + 1;
            fb[i] = fb[i-1];
        }
        else if (s[i] == 'b')
        {
            fa[i] = fa[i-1];
            fb[i] = fb[i-1] + 1;
        }
        else {
            fa[i] = fa[i-1];
            fb[i] = fb[i-1];
        }
    }
    cout << tknp();
}
