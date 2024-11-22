    #include <bits/stdc++.h>
    #define int long long
    using namespace std;
    int n, a[100005];
    int ans = 1;
    main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i] != a[i - 1])
                break;
            ans++;
        }
        cout<<ans;
    }