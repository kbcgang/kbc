///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 1; i <= Million; i++)
    {
        f[i] = (i + 1) * i / 2;
        a[f[i]]++;
        if (f[i] > Million)
        {
            break;
        }
    }
    cin >> n;
    if (a[n] == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
}
