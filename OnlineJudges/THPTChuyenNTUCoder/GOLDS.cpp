/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
short n;
int m[25], M;
long ans;
void check(int t, int i)
{
    if(i==n)
    {
        if(t<=M)
            ans++;
        return;
    }
    check(t + m[i], i + 1);
    check(t, i + 1);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> M;
    for (int i = 0; i < n; i++)
        cin >> m[i];
    check(0, 0);
    cout << ans;
}