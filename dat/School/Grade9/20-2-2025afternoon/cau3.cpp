/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int q;
int a, b;
bool x[200005];
int d;
void KBCGPT()
{
    if (a <= n && b > n)
    {
        if (x[a] ^ x[b])
        {
            if (x[a])
                d--;
            else
                d++;
        }
    }
    swap(x[a], x[b]);
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
    cin >> n;
    for (int i = 1; i <= n; i++)
        x[i] = 1;
    d = n;
    cin >> q;
    while (q--)
    {
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        KBCGPT();
        cout << d << "\n";
    }
}