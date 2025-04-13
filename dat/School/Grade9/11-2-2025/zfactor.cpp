/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int snt[1000005], dem[1000005];
int n, k, a[100005];
void make_sieve()
{
    for (int i = 2; i <= k; i++)
        if (!snt[i])
            for (int j = i; j <= k; j += i)
                if (!snt[j])
                {
                    snt[j] = i;
                    dem[i]++;
                }
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
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    make_sieve();
    for (int i = 0; i < n; i++)
        cout << dem[a[i]] << "\n";
}