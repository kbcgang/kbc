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
kien maxx,minn, vtr,ans,l,r;
pair <kien, kien> a[1000000];

bool compare(pair <kien, kien> x, pair <kien, kien> y)
{
    if (x.first < y.first)
    {
        return true;
    }
    else if (x.first == y.first)
    {
        if (x.second >= y.second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].second;
    }
    sort (a + 1, a + n + 1, compare);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
}