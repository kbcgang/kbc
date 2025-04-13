/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <ios>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int h[1000005];
int ans, ma;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for (int i = 0; i < n; i++)
        cin >> h[i];
    for (int i = 1; i < n; i++)
    {
        ma = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (h[i] > ma && h[j] > ma)
                ans++;
            else if(h[i]<=ma)
                break;
            ma = max(h[j], ma);
        }
    }
    cout<<ans;
}