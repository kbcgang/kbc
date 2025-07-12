///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

int tonguoc(int x)
{
    kien sum = 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            sum += i;
            if (x / i != i)
            {
                sum += x / i;
            }
        }
    }
    if (sum == 0)
    {
        return -1;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> l >> r;
    if (tonguoc(l) == -1 or tonguoc(r) == -1)
    {
        cout << "NO";
    }
    else if (tonguoc(l) == tonguoc(r))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}