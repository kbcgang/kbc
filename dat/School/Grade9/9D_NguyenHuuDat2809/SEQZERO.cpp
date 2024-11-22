/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n;
int a[100005], s[100005], ans;
int dem[200005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        s[i] = s[i - 1] + a[i];
        // cout<<s[i]<<" ";
        ans += dem[s[i]];
        dem[s[i]]++;
    }
    cout << ans + dem[0];
}