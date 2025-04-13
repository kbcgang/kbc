/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int snt[1000005];
void make_sieve()
{
    for (int i = 2; i <= 1e6; i++)
        if (snt[i] == 0)
            for (int j = i; j <= 1e6; j += i)
                if(snt[j]==0)
                snt[j] = i;
}
ll d;
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
    cin >> n;
    make_sieve();
    for (int i = 2; i <= n; i++)
        {
            int m = i;
            while (m > 1)
            {
                d++;
                m /= snt[m];
            }
        }
    cout<<d;
}