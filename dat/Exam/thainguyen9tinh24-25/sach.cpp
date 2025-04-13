/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#include <cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, t, a, b;
ll k[200005],ans;
int get(int i)
{
    int l=1,r=i;
    while(l<=r)
    {
        int m=(l+r)/2; // đọc hết sách từ m -> i
        if(1ll*(i-m+1)*a+(m-1)*b<=t)
            r=m-1; // đoạn từ r -> i thỏa mãn
        else l=m+1;
    }
    return r+1;
}
void ChatGPT()
{
    for (int i = 1; i <= n; i++)
        ans=max(ans,k[i]-k[get(i)-1]);
    cout<<ans;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    k[-1]=0;
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> t >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        cin >> k[i];
        k[i] = k[i - 1] + k[i];
    }
    ChatGPT();
}