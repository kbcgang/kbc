/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000], a[Million];
kien maxx, minn, vtr, l, r, sum;

int main()
{
    cin >> n >> m;
    for (kien i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (kien r = 0; r < n; r++)
    {
        sum += a[r];

        while (sum > m)
        {
            sum -= a[l];
            l++;
        }
        dem += (r - l + 1);
    }
    cout << dem << endl;
}
