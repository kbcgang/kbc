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
kien n,k,m,dem, d, mor[Million], eve[Million];
kien maxx,minn, vtr,ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (cin >> n >> d >> r)
    {
        if (n == 0 and d == 0 and r == 0)
        {
            exit(0);
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> mor[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> eve[i];
        }
        sort (mor + 1, mor + 1 + n);
        sort (eve + 1, eve + 1 + n);
        for (int i = 1; i <= n; i++)
        {
            for (int i = 1; i <= n; i++)
            {
                
            }
        }
    }
}