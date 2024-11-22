#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[1000005], ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int tam = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[i + 1])
            tam++;
        else
        {
            tam = 1;
        }
        ans = max(ans, tam);
    }
    printf("%d", ans);
}