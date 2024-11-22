/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n, k;
long a[100005];
int ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Cau5.inp","r"))
    {
        freopen("Cau5.inp","r",stdin);
        freopen("Cau5.out","w",stdout);
    }
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        long long t = 0;
        for (int j = i; j < n; j++)
        {
            t += a[j] ;
            if (t % k == 0)
                ans++;
        }
    }
    cout << ans;
}