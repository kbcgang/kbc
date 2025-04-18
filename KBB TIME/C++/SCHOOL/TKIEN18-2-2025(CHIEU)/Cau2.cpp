/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem;
float ket_qua,ans, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, x, c;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        dem = 0;
        ans = 0;
        x = "";
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] >= '0' and s[j] <= '9')
            {
                dem++;
                ans += s[j] - '0';
                x += s[j];
            }
        }
        if (dem != 0)
        {
            ans = ans / dem;
            if (ket_qua < ans)
            {
                ket_qua = ans;
                c = x;
            }
        }
        cout << x << " ";
    }
    cout << c;
}