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
kien n,k, a[Million];
kien ans;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    map<int, int> pp;
    int i = 1, j = 1;
    int dem = 0;
    while (j <= n)
    {
        if (pp[a[j]] == 0)
        {
            dem++;
        }
        pp[a[j]]++;
        while (dem > k)
        {
            pp[a[i]]--;
            if (pp[a[i]] == 0)
            {
                dem--;
            }
            i++;
        }
        ans += (j - i + 1);
        j++;
    }
    cout << ans << endl;
}