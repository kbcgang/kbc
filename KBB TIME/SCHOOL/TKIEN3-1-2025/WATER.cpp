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
kien n,k,m,dem, l[1000000];
kien maxx,minn, vtr,ans, r[1000000], times;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> l[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> r[i];
        }
        if (r[1] > times)
        {
            cout << 1 << " ";
        }
        times = 1;
        for (int i = 2; i <= n; i++)
        {
            times++;
            if (r[i] > times)
            {
                cout << times << " ";
            }
            else
            {
                cout << 0 << " ";
                times--;
            }
        }
        times = 0;
        cout << "\n";
    }
}