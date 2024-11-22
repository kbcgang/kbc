/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n, s;
long long a[100005], ans;
long long t[100005];
int m[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        t[i] = (t[i - 1] + a[i])%s;
    }
    for(int i=-1;i<n;i++)
    {
        ans+=m[t[i]];
        m[t[i]]++;
    }
    cout<<ans;
}