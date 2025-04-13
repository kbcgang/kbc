/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string a;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a;
    if (a.size() & 1)
    {
        for (int i = a.size() - 1; i >= 0; i -= 2)
            cout << a[i];
        for (int i = 1; i < a.size(); i += 2)
            cout << a[i];
    }
    else
    {
        for (int i = a.size() - 1; i >= 0; i -= 2)
            cout << a[i];
        for (int i = 0; i < a.size(); i += 2)
            cout << a[i];
    }
}