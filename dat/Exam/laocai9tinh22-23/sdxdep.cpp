/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int a, b;
#define ErasLimit 10000005
int snt[ErasLimit];
void make_sieve()
{
    for (int i = 2; i <= ErasLimit; i++)
        if (snt[i] == 0)
        {
            snt[i] = 1;
            for (int j = i * 2; j <= ErasLimit; j += i)
                snt[j]++;
        }
}
int dx(int n)
{
    int s = 0;
    while (n > 0)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_sieve();
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++)
        if (snt[i] >= 3)
            if (i == dx(i))
                ans++;
    cout << ans;
}