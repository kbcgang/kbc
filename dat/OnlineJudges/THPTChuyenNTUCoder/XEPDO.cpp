/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
bool kt=0;
int n;
long m1, m2;
long a[25];
int ans;
void check(int i, long s1, long s2, int dem1, int dem2)
{
    if (i == n)
    {
        ans = max(ans, dem1 + dem2);
        if(ans==n){
            kt=1;
        }
        return;
    }
    if (s1 + a[i] <= m1){
        check(i + 1, s1 + a[i], s2, dem1 + 1, dem2);
    }
    if (s2 + a[i] <= m2)
        check(i + 1, s1, s2 + a[i], dem1, dem2 + 1);
    if(kt){
        return;
    }
    check(i + 1, s1, s2, dem1, dem2);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m1 >> m2;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    check(0, 0, 0, 0, 0);
    cout << ans;
}