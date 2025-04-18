// /// Hãy làm Sư tử, đừng làm Nai.😅😅😅
// /// Hãy làm thợ săn, đừng làm con mồi.
// /// --- trungkien1252010@gmai.com ---
// /// ☆*: .｡. o(≧▽≦)o .｡.:*☆
// #include <bits/stdc++.h>
// using namespace std;
// #define kien long long
// #define JAV main
// #define Million 1000000
// #define NT 10000000
// #define MOD 1000000007
// kien n, k, m, dem, f[NT + 5];
// kien maxx, minn, vtr, ans, l, r, dp[1000000];
// pair <int, int> a[Million];

// JAV()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     cin >> n >> k;
//     for (int i = 1; i <= n; i++)
//     {
//     	cin >> a[i].first;
//     }
// 	for (int i = 1; i <= n; i++)
// 	{
// 		cin >> a[i].second;
// 		if (a[i].second == 1 and a[i].first == 1)
// 		{
// 			ans = i;
// 		}
// 	}    
// 	for (int i = 1; i <= k; i++)
// 	{
// 		cin >> vtr;
// 		if (vtr < ans)
// 		{
// 			cout << 1 << ' ';
// 		}
// 		else if (a[vtr].first == 1)
// 		{
// 			cout << 1 << " ";
// 		}
// 		else
// 		{
// 			cout << 0 << " ";
// 		}
// 	}
// }
    

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
    int n, k; cin >> n >> k;
    int a[n + 5], b[n + 5], s[k + 5];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 0; i < k; i++) cin >> s[i];
    bool d[n + 10];
    for (int i = 0; i <= n + 5; i++) 
    {
    	d[i] = 0;
    }
    for (int i = n; i >= 1; i--) 
    {
        if (a[i] == 1 and b[i] == 1) 
        {
        	d[i] = 1;
        }
        else 
        {
        	d[i] = d[i + 1];
        }
    }

    for (int i = 0; i < k; i++) 
    {
        int x = s[i];
        int ans = 0;
        if (a[1] == 1 and (x == 1 or a[x] == 1 or (b[x] == 1 and d[x + 1] == 1)))
            ans = 1;
        cout << ans << " ";
    }

    return 0;
}
