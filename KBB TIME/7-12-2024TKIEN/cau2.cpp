///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000];
kien maxx,minn, vtr,ans;

void sanguoc()
{
    for (int i = 1; i <= Million; i++)
    {
        f[i] = 1;
    }
    f[0] = 0;
    for (int i = 2; i <= Million; i++)
    {
        for (int j = i; j <= Million; j += i)
        {
            f[j]++;
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sanguoc();
    cin >> n;
    vtr = *max_element(f + 1,f + 1 + n);
    for (int i = 1; i <= n; i++)
    {
        if (f[i] == vtr)
        {
            cout << i;
            exit(0);
        }
    }
}