#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pb push_back
#define ppb pop_back
#define fr first
#define sc second
#define mod (int)(1e9 + 7)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)a.size()
using namespace std;

ll nad(ll a, ll b, ll M)
{
    if (b == 0)
        return 0;

    long long t = nad(a, b / 2, M) % M;

    if (b & 1)
        return ((t + t) % M + a % M) % M;
    else
        return (t + t) % M;
}

void solve(){
    int n, k;
    cin >> n >> k;
    
    int base = 0, ans1 = 0, cur = 1, ans = 0;
    
    for(int i = 1; i <= k + 1; i ++){
        base += ans + cur;
        ans += cur;
        cur = base;
        
        base %= mod;
        ans %= mod;
        cur %= mod;
    }
    
    cout << nad(ans, n, mod);
} 
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 1;
    // cout << (int)('Z'); return 1;
    
    while(n){ 
        solve();
        n --;
        cout << "\n";
    }
}