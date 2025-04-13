/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #include <ios>
// #include <climits>
// #include <array>
// #include <cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k, a[100005];
ll s[100005];
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i++)
    {
        s[i]=INT_MAX;
        for (int j = i - 1; j >= max(1, i - k); j--)
            s[i]=min(s[i],s[j]+abs(a[i]-a[j]));
    }
    cout<<s[n];
}