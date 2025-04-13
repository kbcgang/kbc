/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string a, b;
int res[2505][2505], ans;
int l = -1, r;
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
    getline(cin, a);
    getline(cin, b);
    for (int i = 1; i <= a.size(); i++)
        for (int j = 1; j <= b.size(); j++)
        {
            if (a[i - 1] == b[j - 1])
                res[i][j] = res[i - 1][j - 1] + 1;
            if (res[i][j] > ans)
            {
                ans = res[i][j];
                r = j;
                l = j - res[i][j];
            }
        }
    for (int i = l; i < r; i++)
        cout << b[i];
}