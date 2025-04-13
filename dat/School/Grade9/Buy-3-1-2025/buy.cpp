/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int a, b, n;
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
    cin >> n >> a >> b;
    int x = 0;
    while (x * a <= n)
    {
        if ((n - x * a) % b == 0)
        {
            cout << "YES\n"
                 << x << " " << (n - x * a) / b;
            exit(0);
        }
        x++;
    }cout<<"NO";
}