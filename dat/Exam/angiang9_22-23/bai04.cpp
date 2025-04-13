/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
vector<ll> binary;
ll s;
bool start;
void getBinary(int pos)
{
    for (int i = start; i <= 1; i++)
    {
        // start = i;
        s = s * 10 + i;
        // cout << s << "\n";
        // if (s != 0)
            // binary.push_back(s);
        if (s <= 1e17 && s != 0)
            getBinary(pos + 1);
        binary.push_back(s);
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
    getBinary(0);
    ll n;
    cin >> n;
    sort(binary.begin(),binary.end());
    for (auto i : binary)
        if(i%n==0&&i!=0)
        {
            cout<<i;
            exit(0);
        }
}