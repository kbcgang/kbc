/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k;
string ass;
int a[100005], ans = INT_MAX;
// n=8, k=4
// 0 1 2 3 4 5 6 7
// 1 3 5 6
void KBCGPT(int i)
{
    int p1, p2;
    p1 = i + k / 2;
    if (k & 1)
        p2 = i + k / 2 + 1;
    ans = min(max(a[p1] - a[i], a[i + k] - a[p1]), ans);
    if (k & 1)
        ans = min(max(a[p2] - a[i], a[i + k] - a[p2]), ans);
    // cout<<ans<<"\n";
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
    cin >> n >> k;
    k--;
    cin >> ass;
    n = 0;
    for (int i = 0; i < ass.size(); i++){
        if (ass[i] == '0')
            a[n++] = i;
        // cout<<ass[i];
    }
    // for(int i=0;i<n;i++)cout<<a[i]<<" ";
    for (int i = 0; i+k < n; i++)
        KBCGPT(i);
    cout<<ans;
}