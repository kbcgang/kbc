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
kien n,k,m,dem,b[Million + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int j = 1;
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
        while (j <= n)
        {
            if (a[j] < b[i])
            {
                ans++;
                j++;
            }
            else
            {
                break;
            }
        }
        cout << ans << " ";

    }
    
}