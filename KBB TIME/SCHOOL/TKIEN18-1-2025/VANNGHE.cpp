///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 10000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r, dp[10000];

struct VANNGHE
{
    kien s,t,c;
};
VANNGHE input[Million];

bool ktr(VANNGHE x, VANNGHE y)
{
    if (x.s > y.s)
    {
        return false;
    }
    else if (x.s == y.s)
    {
        if (x.t > y.t)
        {
            return false;
        }
        else if (x.t == y.t)
        {
            if (x.c > y.c)
            {
                return false;
            }
        }
    }
    return true;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k >> n;
    fill(dp + 1, dp + 1 + k, INT_MAX);
    for (int i = 1; i <= n; i++)
    {
        cin >> input[i].s >> input[i].t >> input[i].c;
    }
    sort (input + 1, input + 1 + n, ktr);
    dp[input[1].t] = input[1].c;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (input[j].t >= input[i].s)
            {
                dp[input[i].t] = min(dp[input[i].t], dp[input[j].t] + input[i].c);
            }
        }
    }
    cout << dp[k];
}