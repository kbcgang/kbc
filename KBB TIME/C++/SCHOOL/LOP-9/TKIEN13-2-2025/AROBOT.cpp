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
kien n,k,m,dem, a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];
unordered_map<int, int> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pp[a[i]] = i;
    }
    pp[0] = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (pp[i] > pp[i-1])
        {
            cout << i << " ";
        }
        else if (pp[i] < pp[i-1])
        {
            cout << "\n" << i << " ";
        }
    }
}