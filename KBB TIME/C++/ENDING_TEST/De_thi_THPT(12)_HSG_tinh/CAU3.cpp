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
kien maxx,minn, vtr,ans,l,r;
kien n,k,m,dem;
pair <kien, kien> a[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first;
        a[i].second = 1;
    }
    for (int i = n + 1; i <= 2*n; i++)
    {
        cin >> a[i].first;
        a[i].second = 2;
    }
    sort (a + 1, a + 1 + 2*n);
    for (int i = 1; i < 2*n; i++)
    {
        if (a[i].second != a[i+1].second)
        {
            ans++;
            i++;
        }
    }
    cout << ans;
}