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
kien maxx,minn, vtr,ans, ans1,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    for (int i = 2; i <= sqrt(m); i++)
    {
        if (m % i == 0)
        {
            ans += i;
            if (m / i != i)
            {
                ans += m / i;
            }
        }
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans1 += i;
            if (n / i != i)
            {
                ans1 += n / i;
            }
        }
    }
    if (ans == ans1)
    {
        if (ans == 0)
        {
            cout << "NO";
            exit(0);
        }
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}