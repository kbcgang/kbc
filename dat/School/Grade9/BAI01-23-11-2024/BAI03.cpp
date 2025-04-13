/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, m;
int a[100005];
map<long,int> pos;
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
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (pos[a[i] - m] != 0)
        {
            cout << pos[a[i] - m] << " " << i + 1;
            exit(0);
        }
        if (pos[a[i]] == 0)
            pos[a[i]] = i + 1;
    }
    cout << -1;
}