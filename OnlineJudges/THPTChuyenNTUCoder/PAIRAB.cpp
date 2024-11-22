/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
int a[200005];
// vector<> b;
int ans;
int m[200005];
int dem;
int check(int l, int r, int x)
{
    int pos=r+1;
    while (l <= r)
    {
        int g = (l + r) / 2;
        if (-m[g] >= x)
            l = g + 1;
        else
        {
            pos = g;
            r = g - 1;
        }
    }
    return (n-pos-dem)/2;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[i] = a[i] - x;
        if(m[i]>0)
            dem++;
    }
    sort(m, m + n);
    // int k=0;
    for (int i = 0; i < n; i++)
    {
        ans += check(i + 1, n - 1, m[i]);
    }
    cout << ans;
}