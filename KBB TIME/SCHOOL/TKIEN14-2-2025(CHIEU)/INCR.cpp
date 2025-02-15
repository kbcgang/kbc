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
kien n, a[10000007], d, ans;

JAV()
{
    cin >> n >> d;
    for(kien i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(kien i = 2; i <= n; i++)
    {
        if(a[i - 1] >= a[i])
        {
            kien k = (a[i - 1] - a[i]) / d + 1;
            ans += k;
            a[i] = a[i] + k * d;
        }

    }
    cout << ans;
}