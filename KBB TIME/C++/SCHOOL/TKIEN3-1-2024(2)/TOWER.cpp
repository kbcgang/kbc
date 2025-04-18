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
kien n,k,m,dem, a[Million];
kien maxx,minn, vtr,ans,l,r;
set <int> S;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        set<int> :: iterator it = S.lower_bound(a[i]);
        if (it == S.end())
        {
            ans++;
        }
        else
        {
            S.erase(it);
        }   
        S.insert(a[i]);
    }
    cout << ans;
    return 0;
}