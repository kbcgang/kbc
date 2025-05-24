/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        kien k;
        cin >> n >> k;
        __int128 mx = (__int128)n * (n - 1) * (n - 2) / 6;
        if(k > mx + 1)
        {
            cout << "No\n";
            continue;
        }
        kien r = k;
        vector<int> S;
        for(int s = n - 1; s >= 2; --s)
        {
            kien f = (kien)s * (s - 1) / 2;
            if(f <= r)
            {
                S.push_back(s);
                r -= f;
            }
        }
        int l = S.size();
        int L = l + 1;
        vector<kien> dp(L + 2, 0), a(L + 3, 0);
        if(l == 0)
        {
            dp[1] = n - 1;
        }
        else
        {
            int s1 = S[0];
            dp[1] = (n - 1) - s1;
            for(int i = 2; i <= L; ++i)
            {
                int si1 = S[i - 2];
                a[i] = si1 - (L - (i - 1));
            }
            a[L + 1] = 0;
            for(int i = 2; i <= L; ++i)
            {
                dp[i] = a[i] - a[i + 1];
            }
        }
        cout << "Yes\n";
        vector<pair<kien, kien>> canh;
        canh.reserve(n - 1);
        for(int i = 2; i <= L; ++i)
            canh.emplace_back(i - 1, i);
        int cur = L + 1;
        for(int i = 1; i <= L; ++i)
        {
            for(int j = 0; j < dp[i]; ++j)
            {
                canh.emplace_back(i, cur++);
            }
        }
        for(auto &i : canh)
            cout << i.first << " " << i.second << "\n";
    }
}
