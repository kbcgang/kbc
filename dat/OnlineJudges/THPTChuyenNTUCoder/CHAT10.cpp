#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[100005], q, x;
void chop(int x)
{
    int tam = lower_bound(a, a + n, x) - a;
    int ans = abs(x - a[tam]);
    if (ans == 0)
        cout << 0 << "\n";
    else
    {
        int dau = 0, cuoi = tam;
        while (dau <= cuoi)
        {
            int giua = (dau + cuoi) / 2;
            if (abs(x - a[giua]) <= ans)
            {
                ans = abs(x - a[giua]);
                if (abs(x - a[giua - 1]) < abs(x - a[giua + 1]))
                    cuoi = giua - 1;
                else
                    dau = giua + 1;
            }
            else
                dau = giua + 1;
        }
        cout << ans << "\n";
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cin >> q;
    while (q--)
    {
        cin >> x;
        chop(x);
    }
}