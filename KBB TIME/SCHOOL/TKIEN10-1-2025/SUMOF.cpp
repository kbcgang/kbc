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
kien n, k, m, dem;
kien maxx, minn, vtr;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien N;
    cin >> N;
    vector<kien> a;
    for (int i = 1; i * i <= N; i++)
    {
        a.push_back(i * i);
    }

    kien ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i; j < a.size(); j++)
        {
            kien dem = N - a[i] - a[j];
            if (dem < 0)
                break;
            kien c = sqrt(dem);
            if (c * c == dem and c >= j)
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
