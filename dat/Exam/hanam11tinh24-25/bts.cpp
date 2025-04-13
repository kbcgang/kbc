/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <ios>
#include <array>
#include <cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll ans;
int h[1000005], ptu = 1;
int ChatGPT(int x)
{
    int l = 1, r = ptu;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (h[m] >= x)
            l = m + 1;
        else
            r = m - 1;
    }
    return l - 1;
}
void tknp(int i)
{
    int pos = ChatGPT(h[i]);
    if (pos == 0)
    {
        ans += ptu;
        ptu = 1;
        h[1] = h[i];
    }
    else
    {
        ans += ptu - pos + 1;
        if (h[pos] == h[i])
            ptu = pos;
        else
        {
            h[++pos] = h[i];
            ptu = pos;
        }
    }
}
void normal(int x)
{

}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> h[i];
    for (int i = 2; i <= n; i++)
    {
        if (h[ptu] > h[i])
        {
            h[++ptu] = h[i];
            ans++;
        }
        else
        {
            int j;
            for(j=ptu;j>0;j--)
                if(h[j]<=h[i])
                    ans++;
            ptu=j+1;
            ans++;
            h[ptu]=h[i];
        }
    }
    cout << ans;
}