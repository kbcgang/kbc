/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k, ma,mi=INT_MAX;
int x,y;
ll s[2000005],ans;
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
    for (int i = 0; i < n; i++)
    {
        cin >> y >> x;
        ma = max(ma, x);mi=min(mi,x);
        s[x] +=y;
    }
    for (int i = 0; i <= ma; i++)
        s[i] = s[i - 1] + s[i];
    for(int i=mi;i+2*k<=ma;i++)
        ans=max(ans,s[i+2*k]-s[i-1]);
    if(ans==0)ans=s[ma];
    cout<<ans;
}