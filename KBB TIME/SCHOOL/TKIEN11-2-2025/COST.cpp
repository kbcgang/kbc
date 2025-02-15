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
kien n,k,m,dem, a, b;
kien dat[Million],minn, vtr,ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> a >> b;
    for (int i = 1; i <= n;i++)
    {
        cin >> dat[i];
        if (dat[i] == 2)
        {
            ans += (a + b);
        }
        else
        {
            ans += min(a, b);
        }
    }
    cout << ans;            
}