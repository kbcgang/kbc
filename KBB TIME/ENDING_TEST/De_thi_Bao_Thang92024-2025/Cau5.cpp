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
kien n,k,m,dem,f[Million + 5];
kien maxx,minn, vtr,ans,l,r,x;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        f[i] = f[i-1];
        if (x % 2 == 0)
        {
            f[i]++;
        }
        else
        {
            f[i] = 0;
        }
    }
    cout << *max_element(f + 1, f + n + 1);
}