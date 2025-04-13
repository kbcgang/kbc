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
// kien n, k, m, dem, a[1000000];
// kien maxx, minn, vtr, ans, l, r, dp[1000000];
// string s;
// unordered_map <int, int> pp;
// JAV()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     cin >> n;
//     for (int k = 1; k <= n; k++)
//     {
//     	cin >> s;
//     	for (int i = 0; i < s.size(); i++)
//     	{
//     		if (s[i] != 'W' and s[i] != 'A' and s[i] != 'R')
//     		{
//     			dem++;
//     		}
//     		else
//     		{
//     			ans = max(ans, dem);
//     			dem = 0;
//     		}
//     	}
//     	pp[ans]++;
//     	maxx = max(ans, maxx);
//     	ans = 0;
//     }
//     cout << maxx << " " << pp[maxx];
// }



/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

bool kt(char c) {
    return c != 'W' && c != 'A' && c != 'R';
}

JAV () 
{
    kien n, m = 0, c = 0;
    cin >> n;
    for (kien k = 0; k < n; k++) 
    {
        string s;
        cin >> s;
        kien i = 0, t = s.size();
        while (i < t) 
        {
            if (!kt(s[i])) 
            {
                i++;
                continue;
            }
            kien j = i;
            while (j < t and kt(s[j])) j++;
            kien l = j - i;
            if (l > m) 
            {
                m = l;
                c = 1;
            } else if (l == m && l > 0) {
                c++;
            }
            i = j;
        }
    }
    if (m == 0) cout << "NO";
    else cout << m << " " << c;
}