#include <bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define fr first
#define sc second
#define mod int(1e9 + 7)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)a.size()
using namespace std;


using ll = long long;

void solve(){
    int n, mn = INT_MAX;
    cin >> n;
    
    vector <int> ans(n + 1, 0), a(n + 1), cnt(1e7 + 5, 0);

    for(int i = 1; i <= n; i ++) cin >> a[i];

    cnt[a[1] + a[2] + 2000000] ++;
    for(int k = 3; k < n; k ++){
        for(int x = k + 1; x <= n; x ++){
            ans[x] += cnt[a[x] - a[k] + 2000000];
        }
        for(int j = k - 1; j >= 1; j --){       ///tổng của các a[i]+a[j] vì k tăng nên k lúc trước trở thành j hoặc i
            cnt[a[k] + a[j] + 2000000] ++;
        }
    }
    for(int i = 1; i <= n; i ++) cout << ans[i] << ' ';
}
 
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 1;

    freopen("CISET.inp", "r", stdin);
    freopen("CISET.out", "w", stdout);

    // cout << 1; return 1;
    // cin >> n;
    while(n){ 
        solve();
        n --;
        cout << "\n";
    }
}