/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

int ktr(const string &a)
{
    int maxx = 1;
    int dodai = 1;

    for (int i = 1; i < a.length(); ++i)
    {
        if (a[i] == a[i - 1])
        {
            dodai++;
        }
        else
        {
            maxx = max(maxx, dodai);
            dodai = 1;
        }
    }

    maxx = max(maxx, dodai);

    return maxx;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<string> f(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> f[i];
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        int length = ktr(f[i]);
        ans = max(ans, length);
    }
    cout << ans << endl;

    return 0;
}
