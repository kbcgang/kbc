#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[1005], ans = 1,f[1005];
main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = -1; j < i; j++)
            if (a[j] < a[i])
            {
                f[i]=max(f[i],f[j]+1);
            }
        ans=max(ans,f[i]);
    }
    printf("%d", ans);
}
