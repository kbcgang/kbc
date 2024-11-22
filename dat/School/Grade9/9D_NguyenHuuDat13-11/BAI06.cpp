/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, k, l, r, dist;
long a[1000005];
int pos[1000005], s;
kien()
{
    if (fopen("BAI06.inp", "r"))
    {
        freopen("BAI06.inp", "r", stdin);
        freopen("BAI06.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    pos[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s = (s + a[i] % k) % k;
        if (pos[s] != 0)
        {
            if(s==0)
            {
                dist=i;
                l=1;
                r=i;
            }
            else if (i - pos[s] > dist)
            {
                dist = i - pos[s];
                l = pos[s]+1;
                r = i;
            }
        }
        else
            pos[s] = i;
    }
    if (l != 0)
        cout << l << " " << r;
    else
        cout << 0;
}