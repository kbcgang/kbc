/// Discipline > Motivation
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, l, r;
ll Max = -inf;
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
    ll Min[n + 5] = {}, a[n + 5] = {}, 
        pre[n + 5] = {}, pos[n + 5] = {};
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + a[i];
    for (int i = 1; i <= n; i++)
    {
        Min[i]=Min[i-1];
        pos[i] = pos[i - 1];
        if (pre[i] < Min[i - 1])
        {
            pos[i] = i;
            Min[i] = pre[i];
        }
    }
    for (int i = 1; i <= n; i++)
        if (pre[i] - Min[i - 1] > Max)
        {
            l = pos[i - 1]+1;
            r = i;
            Max = pre[i] - Min[i - 1];
        }
    cout << Max << "\n";
    for (int i = l; i <= r; i++)
        cout << a[i]<<" ";
}