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
kien n,k,m,dem, a[NT + 5];
kien maxx,minn, vtr,ans,l,r;

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
    if (a[2] < a[1])
    {
        cout << 0;
        exit(0);
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < a[i-1])
        {
            for (int j = i; j <= n; j++)
            {
                if(a[j] > a[j-1])
                {
                    cout << j - 1 << "\n";
                    exit(0);
                }
            }
        }
    }
}