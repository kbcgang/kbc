///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;

bool ktr(kien x)
{
    if (x < 2)
    {
        return false;
    }
    if (x == 2)
    {
        return true;
    }
    else
    {
        for (kien i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    n = sqrt(n);
    for (kien i = n; i <= n + 10000; i++)
    {
        if (ktr(i) == true)
        {
            cout << i*i;
            break;
        }
    }
}