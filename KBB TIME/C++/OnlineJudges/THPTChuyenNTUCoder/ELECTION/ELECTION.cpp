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
kien n,k,m,dem, a[1000000];
kien maxx,minn, vtr,ans,l,r;
unordered_map<int, int> pp;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    for (int p = 1; p <= t; p++)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            maxx = max(maxx, a[i]);
            pp[a[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] < maxx)
            {
                k -= (maxx - a[i]);
            }
            if (k < 0)
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (k == 0)
        {
            cout << "YES" << endl;
        }
        if (k > 0)
        {
            if (k % n == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}