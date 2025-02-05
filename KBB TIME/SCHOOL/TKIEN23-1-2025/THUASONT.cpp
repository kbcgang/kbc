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
map<kien, kien> dem;
kien k = 0;

void pt(kien n)
{
    for (kien i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            k++;
            while (n % i == 0)
            {
                dem[i]++;
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        dem[n]++;
        k++;
    }
}
kien n;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    pt(n);
    cout << k << endl;
    for (auto &x : dem)
        cout << x.first << ' ' << x.second << endl;
}
