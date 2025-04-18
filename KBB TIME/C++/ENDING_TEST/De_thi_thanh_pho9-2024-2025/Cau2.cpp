///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien ans;
string s,x;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.size() - 2; i++)
    {
        if (x[0] == s[i])
        {
            if (x[1] == s[i+1] and x[2] == s[i+2])
            {
                ans++;
            }
        }
    }
    cout << ans;
}