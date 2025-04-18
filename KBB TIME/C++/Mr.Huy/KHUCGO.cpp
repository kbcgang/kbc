///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 200000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, a[Million];
kien maxx,minn, vtr,ans,l,r;
kien b[Million]; 

bool ktr(kien x, kien k)
{
    for (int i = 1; i <= n; i++)
    {
        kien tmp = a[i]; 
        if (tmp > x)
        {
            k -= (tmp / x) - (tmp % x == 0);  
        }
        if (k < 0)
        {
            return false;
        }
    }
    return true;
}

kien tknp(kien maxx, kien k)
{
    kien l = 1, r = maxx;
    kien mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid, k) == true)
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
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    cout << tknp(a[n], k);
}