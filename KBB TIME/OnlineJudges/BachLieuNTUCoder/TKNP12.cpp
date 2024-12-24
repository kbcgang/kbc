/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
const kien MAX_N = 1000000;
kien a[MAX_N], b[MAX_N];
kien n;
kien p1 = 0, p2 = 0, ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (kien i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (kien i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    for (kien i = 1; i <= n; i++)
    {
        if (a[i] > 0)
        {
            p1 = i;
            break;
        }
    }
    for (kien i = 1; i <= n; i++)
    {
        if (b[i] > 0)
        {
            p2 = i;
            break;
        }
    }

    if (p1 == 0)
    {
        p1 = n + 1;
    }
    if (p2 == 0)
    {
        p2 = n + 1;
    }
    kien i = n, j = 1;
    while (i >= p1 and j < p2)
    {
        if (abs(b[j]) > a[i])
        {
            i--;
            j++;
            ans++;
        }
        else
        {
            i--;
        }
    }
    i = 1;
    j = n;
    while (i < p1 and j >= p2)
    {
        if (abs(a[i]) > b[j])
        {
            i++;
            j--;
            ans++;
        }
        else
        {
            j--;
        }
    }
    cout << ans;
}
