/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll x;
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
    bool scp[1000005] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ll m = sqrt(x);
        if (m * m == x)
            scp[m] = 1;
    }
    for (int i = 1;; i++)
        if (scp[i] == 0)
        {
            cout << i * i;
            exit(0);
        }
}