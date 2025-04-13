#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <ll, ll> ii;
ll n, decoy, tp;
vector<ll> mang;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen ("TOWER.inp","r"))
    {
        freopen("TOWER.inp","r",stdin);
        freopen("TOWER.out","w",stdout);
    }
    cin >> n;
    for (ll i = 1; i <= n; i ++)
    {
        cin >> decoy;
        tp = lower_bound (mang.begin (), mang.end (), decoy) - mang.begin ();
        if (tp > mang.size () - 1 || mang.size () == 0)
            mang.push_back (decoy);
        else mang[tp] = decoy;
    }
    cout << mang.size ();
}
