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
kien n, k, m, dem, f[NT + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

int main()
{
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    kien maxx = LLONG_MIN;
    kien vtr = 0;
    int start = 0, end = 0, temp_start = 0;
    for (int i = 0; i < n; i++)
    {
        vtr += a[i];
        if (vtr > maxx)
        {
            maxx = vtr;
            start = temp_start;
            end = i;
        }
        if (vtr < 0)
        {
            vtr = 0;
            temp_start = i + 1;
        }
    }
    cout << maxx << endl;
    for (int i = start; i <= end; i++)
    {
        cout << a[i] << (i == end ? "" : " ");
    }
}