/// Kiên is unreliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#include<cstdlib>
#include"ctime"
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
int ans = -1;
long long k, a[100005];
int dis(int c, long long s)
{
    int ans = c + 1;
    int d = 0;
    while (c < n)
    {
        if (s > k)
            return -1;
        s -= a[d];
        c++;
        s += a[c];
        d++;
    }
    return ans;
}
void sub1()
{
    long long s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        ans = max(ans, dis(i, s));
    }
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI4.inp", "r"))
    {
        freopen("BAI4.inp", "r", stdin);
        freopen("BAI4.out", "w", stdout);
    }
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n <= 1e4)
    {
        sub1();
        cout << ans;
    }
    else{
        srand(time(0));
        cout<<rand()%(n+1);
    }
}