/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, a[10];
string hv, s;
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
    cin >> n >> hv;
    for (int i = 0; i < n; i++)
        a[i] = hv[i] - 48;
    cin.ignore();
    getline(cin, s);
    int d = s.size() % n;
    while(d>0)
    {
        s=s+' ';
        d--;
    }
    for (int i = 0; i < s.size(); i += n)
    {
        for (int j = 0; j < n; j++)
            cout << s[i + a[j] - 1];
        cout << "\n";
    }
}