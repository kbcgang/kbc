/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
vector<int> prime = {1, 3, 7, 9};
vector<ll> a = {2, 3, 5, 7};
bool primecheck(ll n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}
void ChatGPT(ll s)
{
    for (auto i : prime)
    {
        s = s * 10 + i;
        if (s >= 1e12)
        return;
        if (primecheck(s))
        {
            ChatGPT(s);
            a.push_back(s);
        }
        s /= 10;
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
    for (int i = 0; i < 4; i++)
        ChatGPT(a[i]);
    sort(a.begin(), a.end());
    ll l, r;
    // for(int i=0;i<=10;i++)cout<<a[i]<<" ";
    cin >> l >> r;
    l = lower_bound(a.begin()+4, a.end(), l) - a.begin();
    r = upper_bound(a.begin(), a.end(), r) - a.begin();
    cout << r - l;
}