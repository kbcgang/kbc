/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <ios>
#include <array>
#include<climits>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll a[100005];
int tknp(int i, int r, ll s)
{
    int res=-1;
    int l = i;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] - a[i - 1] == s)
            res= mid;
        if (a[mid] - a[i - 1] >= s) // giảm xuống để tránh trường hợp 0 0 0 0 0 0 0...
            r = mid - 1;
        else
            l = mid + 1;
    }
    return res;
}
int ChatGPT(int l, int r)
{
    if (l >= r || (a[r] - a[l - 1]) & 1)
        return 0;
    int m = tknp(l, r, (a[r] - a[l - 1]) / 2);
    // cout<<m<<'\n';
    if (m == -1)
        return 0;
    // cout<<l<<' '<<m<<'   '<<m<<' '<<r<<'\n';
    int a = ChatGPT(l, m);
    int b = ChatGPT(m + 1, r);
    return max(a, b) + 1;
}
int t;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    // cin.tie(0)->sync_with_stdio(0);
    t=1;
    for(int d=1;d<=t;d++)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] = a[i - 1] + a[i];
        }
        cout << ChatGPT(1, n);
    }
}