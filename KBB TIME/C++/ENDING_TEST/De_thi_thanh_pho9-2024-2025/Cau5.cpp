///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[NT];
kien maxx,minn, vtr,ans,l,r;

bool ktr(int n)
{
    if (n < 2)
    {
        return false;
    }
    if (n == 2 or n == 3 or n == 5 or n == 7 or n == 11 or n == 13)
    {
        return true;
    }
    if (n == 17 or n == 19 or n == 23 or n == 29 or n == 31)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int tongcs(int x)
{
    int sum = 0;
    int chan = 0;
    int dem = 1;
    while (x > 0)
    {
        sum += x % 10;
        if (dem % 2 == 0)
        {
            chan += x % 10;
        }
        dem++;
        x /= 10;
    }
    if (ktr(chan - (sum - chan)) == true)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    l = 1, r = NT;
    for (int i = 20; i <= Million; i++)
    {
        f[i] = f[i-1];
        if (tongcs(i) == 1)
        {
            f[i]++;
        }
    }
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> l >> r;
        cout << f[r] - f[l-1] << "\n";
    }
}