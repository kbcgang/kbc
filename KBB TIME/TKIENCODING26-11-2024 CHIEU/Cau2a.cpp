///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];
string s,x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline (cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] % 2 == 0)
        {
            x += s[i];
        }
        maxx *= 10;
        maxx += (s[i] - 48);
    }
    for (int i = 0; i < x.size(); i++)
    {
        minn *= 10;
        minn += (x[i] - 48);

    }
    cout << __gcd(maxx, minn);
}
/*
0
1
2 4 8 6 2
3 9 7 1 3
4 6 4 6 4
5 5 5 55
6 6 6 6
7 9 3 1 7
8 4 2 6 8
9 1 9 1 9 1
*/