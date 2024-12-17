///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    m = n % 10;
    if (n == 1 or n == 2 or n == 4 or n == 7)
    {
        cout << -1;
    }
    else if (n % 5 == 0)
    {
        cout << n / 5;   /// 1 2
    }
    else if (m == 8 or m == 3)
    {
        cout << (n - 3) / 5 + 1;
    }
    else if (m == 9)
    {
        cout << 3 + (n - 9) / 5;
    }
    else if (m == 6)
    {
        cout << 2 + (n - 6) / 5;
    }
    else if (m == 4)
    {
        cout << 3 + (n - 9 - 5) / 5 + 1;
    }
    else if (m == 1)
    {
        cout << 2 + (n - 6) / 5;
    }
    else if (m == 2)
    {
        cout << 3 + (n - 9 - 3) / 5 + 1;
    }
    else if (m == 7)
    {
        cout << 3 + (n - 9 - 8) / 5 + 2;
    }
}