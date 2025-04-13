/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int y, x;
int ans = 10000, a, b;
void ChatGPT(int i, int j)
{
    a = i * 10 + (x - i);
    b = j * 10 + (y - j);
    int m = a * 100 + b;
    if (m >= 1000&&m<10000)
        ans = min(ans, m);
    m = b * 100 + a;
    if (m >= 1000&&m<10000)
        ans = min(ans, m);
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
    int p=n/100;
    int q=n%100;
    if(p>q) swap(p,q);
    if(q>18||q==0) cout<<0;
    else{
        if(p>9) cout<<p-9<<9;
        else cout<<1<<p-1;
        if(q>9) cout<<q-9<<9;
        else cout<<1<<q-1;
    }
}