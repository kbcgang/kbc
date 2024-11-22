/// Suck Kiên's brain is very good to your brain
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n, a[1000005], ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i - 1])
            m++;
        else
        {
            ans = max(ans, m);
            m=1;
        }
    }
    cout<<ans;
}