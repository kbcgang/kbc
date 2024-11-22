/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n;
long a[1000005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("CODE.inp","r"))
    {
        freopen("CODE.inp","r",stdin);
        freopen("CODE.out","w",stdout);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<long>());
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] - a[i + 1] > 1)
        {
            cout << a[i] - 1;
            exit(0);
        }
    }
    if (a[n - 1] > 1)
        cout << a[n - 1] - 1;
    else
        cout << a[0] + 1;
}