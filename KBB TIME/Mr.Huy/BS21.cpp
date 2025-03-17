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
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;

bool ktr(kien mid)
{
    kien dem = 0;
    kien dong = 0;
    while (mid >= pow(k, dem))
    {
        dong += int(mid / pow(k, dem));
        dem++;
        if (dong >= n)
        {
            return true;
        }
    }
    if (dong >= n)
    {
        return true;
    }
    return false;
}

kien tknp()
{
    kien l = 1, r = n;
    kien mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    cout << tknp();
}