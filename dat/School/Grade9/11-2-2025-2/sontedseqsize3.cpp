/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int t, n, a[100005];
int Max[100005], Min[100005];
void ChatGPT()
{
    if (n < 3)
    {
        cout << "NO\n";
        return;
    }
    Min[0] = a[0];
    for (int i = 1; i < n - 2; i++)
        Min[i] = min(Min[i - 1], a[i]);
    Max[n - 1] = a[n - 1];
    for (int i = n - 2; i > 1; i--)
        Max[i] = max(Max[i + 1], a[i]);
    for (int i = 1; i < n - 1; i++)
        if (a[i] > Min[i - 1] && a[i] < Max[i + 1])
        {
            cout << "YES\n";
            return;
        }
    cout << "NO\n";
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
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ChatGPT();
    }
}