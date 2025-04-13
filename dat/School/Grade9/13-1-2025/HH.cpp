/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int x, a;
int tcs(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int sum[105];
void make_sum()
{
    for (int i = 1; i <= 50; i++)
        for (int j = i * 2; j <= 100; j += i)
            sum[j] += i;
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
make_sum();    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        a = tcs(a);
        if (sum[a] == a)
            x++;
    }
    cout << x;
}