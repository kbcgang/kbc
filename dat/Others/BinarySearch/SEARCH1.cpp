#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, a[1000005], b[1000005];
bool searbina(int x)
{
    int dau = 0;
    int cuoi = n -1;
    while (dau <= cuoi)
    {
        int giua = (cuoi + dau) / 2;
        if (a[giua] == x)
        {
            return 1;
        }
        else if (a[giua] > x)
            cuoi = giua - 1;
        else if (a[giua] < x)
            dau = giua + 1;
    }
    return 0;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    for (int j = 0; j < m; j++)
    {
        cout << searbina(b[j]);
    }
}
