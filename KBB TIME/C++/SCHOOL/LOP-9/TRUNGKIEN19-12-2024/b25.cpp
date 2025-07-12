/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

int main()
{
    string s, ans = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            int count = s[i] - '0';
            char ch = s[i + 1];
            ans.append(count, ch);
            i++;
        }
    }
    cout << ans << "\n";

    return 0;
}
