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
string a,b;
kien n, n1;

kien tong(string s)
{
    kien sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - 48;
    }
    return sum;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a;
    cin >> b;
    n = a.size() - 1;
    n1 = b.size() - 1;
    if (a[n] == '0' or a[n] == '2' or a[n] == '4' or a[n] == '6' or a[n] == '8')
    {
        if (tong(a) % 3 == 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    else
    {
        cout << '0' << "\n";
    }
    if (b[n1] == '0' or b[n1] == '2' or b[n1] == '4' or b[n1] == '6' or b[n1] == '8')
    {
        if (tong(b) % 3 == 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    else
    {
        cout << 0 << "\n";
    }
}
