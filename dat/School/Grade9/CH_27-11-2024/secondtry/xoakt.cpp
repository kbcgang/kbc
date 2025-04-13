/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
int n, k;
bool palin(int i)
{
    for (int l = i, r = n - k + i - 1; l < r; l++, r--)
    {
        if (s[l] != s[r])
        {
            // cout<<s[l]<<" "<<s[r]<<"\n";
            return false;
        }
    }
    return true;
}
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
    cin >> n >> k;
    cin >> s;
    s = ' ' + s;
    for (int i = 1; i <= k + 1; i++)
        // cout<<i<<" "<<n-k+i-1<<"\n";
        if (palin(i))
        {
            for (int j = i; j <= n - k + i - 1; j++)
                cout << s[j];
            exit(0);
        }
    cout << "No";
}