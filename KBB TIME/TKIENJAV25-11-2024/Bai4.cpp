#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, ans;
long long T, x[100005], t[100005], s, ma;
vector<long long> a;
void removed(long long m)
{
    int pos = -1;
    long long maxx = m;
    ma = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] > maxx)
        {
            ma = maxx;
            maxx = a[i];
            pos = i;
        }
    }
    if(pos != -1)
    {
        s = s - a[pos] + m;
        a[pos] = m;
    }
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
    cin >> n >> T;
    for(int i = 0; i < n; i++)
        cin >> x[i] >> t[i];
    for(int i = 0; i < n; i++)
    {
        if(x[i] + s + t[i] > T)
        {
            if(ma > t[i])
                removed(t[i]);
        }
        else
        {
            s += t[i];
            ma = max(ma, t[i]);
            a.push_back(t[i]);
        }
        ans = max(ans, (int)a.size());
    }
    cout << ans;
}