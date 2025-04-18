/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[Million + 5], a[1000000];
stack<int> b;

void mang()
{
    cin >> n;
    while (n > 0)
    {
        a[dem++] = n % 2;
        n /= 2;
    }
    for (int i = 1; i <= dem; i++)
    {
        cout << a[i];
    }
}

void stackk()
{
    cin >> n;
    while (n > 0)
    {
        b.push(n % 2);
        n /= 2;
    }
    while (!b.empty())
    {
        cout << b.top();
        b.pop();
    }
}

void thapphan()
{
    string s;
    cin >> s;
    long long ans = 0;
    int dem = 1;
    for (int i = 0; i < s.size(); i++)
    {
        ans += pow(2, s.size() - dem) * int(s[i] - 48);
        dem++;
    }
    cout << ans;
}

void THANG()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans = ans*2 + (s[i] - '0');
    }
    cout << ans;
}

void mask()
{
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        a[dem++] = n % 2;
        n /= 2;
    }
    for (int i = 1; i <= dem; i++)
    {
        if (a[i] == 1)
        {
            ans++;
        }
    }
    cout << ans;
}

void dichbit()
{
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            ans++;
        }
        n >>= 1;
    }
    cout << ans;
}

void NHIphanN()
{
    cin >> n;
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << ((i >> j) & 1);
        }
        cout << "\n";
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    NHIphanN();
}


