/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

bool f[NT + 5];

void sangNT()
{
    for (int i = 2; i <= NT; i++)
    {
        f[i] = true;
    }
    f[1] = f[0] = false;
    for (int i = 2; i <= sqrt(NT); i++)
    {
        if (f[i])
        {
            for (int j = i * i; j <= NT; j += i)
            {
                f[j] = false;
            }
        }
    }
}

double Ktr(kien l, kien r)
{
    kien sum = 0, dem = 0;
    for (kien i = l; i <= r; i++)
    {
        if (f[i])
        {
            sum += i;
            dem++;
        }
    }
    if (dem == 0)
        return 0.0;
    return 1.0 * sum / dem;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();

    kien n, l, r;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> l >> r;
        double result = Ktr(l, r);
        cout << fixed << setprecision(2) << result << "\n";
    }
}
