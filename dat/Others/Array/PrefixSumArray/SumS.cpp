/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
long n, s, a[1000005];
map<long,int> dem;
long long ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += dem[s - a[i]];
        dem[a[i]]++;
    }
    cout << ans;
}