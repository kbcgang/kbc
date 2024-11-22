    #include <bits/stdc++.h>
    #define int long long
    using namespace std;
    int n, x, ans;
    main()
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            if (i % 2 == 1)
                ans += x;
        }
        cout<<ans;
    }