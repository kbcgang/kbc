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
int n, dem, sum, timer[1000000], num[100005], AC, l[100005], r[100005];
int pen, ans, k, f[100005];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i] >> timer[i];
        l[num[i]]++;
        r[timer[i]]++;
        f[i] = n-1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (l[timer[i]] >= 1)
        {
            f[i] += l[timer[i]];
        }
        cout << f[i] << " " << 2*(n-1) - f[i] << endl;
    }
}
    