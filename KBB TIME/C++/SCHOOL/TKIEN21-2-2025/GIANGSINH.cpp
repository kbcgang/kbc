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
kien n,k,m,dem,f[NT + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000], alain, asuna;
unordered_map<kien, kien> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int i = 1, j = n;
    dem = 1;
    while (i <= j)
    {
        if (pp[a[i]] == 0 and dem % 2 == 1)
        {
            pp[a[i]]++;
            i++;
            alain++;
            dem++;
        }
        else if (pp[a[i]] == 0 and dem % 2 == 0)
        {
            pp[a[i]]++;
            i++;
            asuna++;
            dem++;
        }
        else if (pp[a[j]] == 0 and dem % 2 == 1)
        {
            pp[a[j]]++;
            j--;
            alain++;
            dem++;
        }
        else if (pp[a[j]] == 0 and dem % 2 == 0)
        {
            pp[a[j]]++;
            j--;
            asuna++;
            dem++;
        }
    }
}