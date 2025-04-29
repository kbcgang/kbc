/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define yes cout << "YES\n";
#define m1 cout << "-1\n";
#define no cout << "NO\n";
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vec<int> dp(n + 1), nx(k, n + 1);
    dp[n] = 1;
    for(int i = n - 1; i >= 0; i--)
    {
        nx[s[i] - 'a'] = i;
        bool miss = false;
        int mn = INT_MAX;
        for(int c = 0; c < k; c++)
        {
            if(nx[c] > n - 1)
            {
                miss = true;
                break;
            }
            mn = min(mn, dp[nx[c] + 1]);
        }
        dp[i] = miss ? 1 : mn + 1;
    }
    vec<vec<int>> occ(k);
    for(int i = 0; i < n; i++) occ[s[i] - 'a'].pb(i);
    int q;
    cin >> q;
    while(q--)
    {
        string t;
        cin >> t;
        int pos = 0;
        bool bad = false;
        for(char ch : t)
        {
            int c = ch - 'a';
            auto it = lower_bound(all(occ[c]), pos);
            if(it == occ[c].end())
            {
                cout << 0 << endl;
                bad = true;
                break;
            }
            pos = *it + 1;
        }
        if(!bad) cout << dp[pos] << endl;
    }
    return 0;
}