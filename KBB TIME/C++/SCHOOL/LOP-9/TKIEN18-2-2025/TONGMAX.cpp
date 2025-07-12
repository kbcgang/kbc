///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien maxx[Million],minn, vtr,ans,l,r;
kien a[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i =1 ; i <= n; i++)
    {
        cin >> a[i];
        maxx[i] = max(maxx[i-1], a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        ans = max(a[i] + maxx[i-1], ans);
    }
    cout << ans;
}