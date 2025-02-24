    ///Hãy làm Sư tử, đừng làm Nai.😅😅😅
    ///Hãy làm thợ săn, đừng làm con mồi.
    /// --- trungkien1252010@gmai.com ---
    ///☆*: .｡. o(≧▽≦)o .｡.:*☆
    #include <bits/stdc++.h>
    using namespace std;
    #define kien long long
    #define JAV main
    #define Million 1000000
    #define NT 10000000
    #define MOD 1000000007
    kien n,k,m,dem,q[Million + 5], a[1000000];
    kien maxx,minn, vtr,ans,l,r, dp[1000000];
    unordered_map<kien, kien> pp;

    JAV()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        kien t;
        cin >> t;
        while (t--)
        {
            cin >> n >> m >> k;
            for (int i = 1; i <= n; i++)
            {
                pp[i] = 0;
            }
            for (int i = 1; i <= m; i++)
            {
                cin >> a[i];
            }
            for (int i = 1; i <= k; i++)
            {
                cin >> q[i];
                pp[q[i]] = 1;
            }
            if (k + 2 <= n)
            {
                for (int i = 1; i <= m; i++)
                {
                    cout << 0;
                }
            }
            else if (n == m and m == k or n == k)
            {
                for (int i = 1; i <= m; i++)
                {
                    cout << 1;
                }
            }
            else
            {
                for (int i = 1; i <= m; i++)
                {
                    if (pp[a[i]] == 0)
                    {
                        cout << 1;
                    }
                    else
                    {
                        cout << 0;
                    }
                }
            }
            pp.clear();
            cout << "\n";
        }
    }