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

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    k = n % 10;
    if (k == 0 or k == 5)
    {
        cout << n / 5;
    }
    else if (k == 3)
    {
        cout << (n - 3) / 5  + 1;
    }
    else if (k == 2)
    {
        cout << (n - 12) / 5 + 4;
    }
    else if (k == 1)
    {
        cout << (n - 6) / 5 + 2;
    }
    else if (k == 6)
    {
        cout << (n - 6) / 5 + 2;
    }
    else if (k == 7)
    {
        cout << (n - 12) / 5 + 4;
    }
    else if (k == 8)
    {
        cout << (n - 3) / 5 + 1;
    }
    else if (k == 9)
    {
        cout << (n - 9) / 5 + 3;
    }
}