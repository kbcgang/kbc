/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll d[1000005];

kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> d[i];
    sort(d, d + n, greater<ll>());
    for (int i = 0; i < n; i++)
        if (d[i] == d[i + 1])
        {
            for (int j = i + 2; j < n; j++)
                if (d[j] == d[j + 1])
                {
                    cout << d[i] * 2 + d[j] * 2;
                    exit(0);
                }
            cout << -1;
            exit(0);
        }
}