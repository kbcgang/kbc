///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000],xuly;
string s, x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H')
        {
            maxx = 1;
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] >= '0' and s[j] <= '9')
                {
                    x += s[j];
                }
                else
                {
                    break;
                }
            }
            for (int j = 0; j < x.size(); j++)
            {
                xuly *= 10;
                xuly += (x[j] - 48);
            }
            x = "";
            ans += maxx*xuly;
            xuly = 0;
        }
        else if (s[i] == 'O')
        {
            maxx = 16;
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] >= '0' and s[j] <= '9')
                {
                    x += s[j];
                }
                else
                {
                    break;
                }
            }
            for (int j = 0; j < x.size(); j++)
            {
                xuly *= 10;
                xuly += (x[j] - 48);
            }
            x = "";
            ans += maxx*xuly;
            xuly = 0;
        }
        else if (s[i] == 'N')
        {
            maxx = 14;
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] >= '0' and s[j] <= '9')
                {
                    x += s[j];
                }
                else
                {
                    break;
                }
            }
            for (int j = 0; j < x.size(); j++)
            {
                xuly *= 10;
                xuly += (x[j] - 48);
            }
            x = "";
            ans += maxx*xuly;
            xuly = 0;
        }
        else if (s[i] == 'C')
        {
            maxx = 12;
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] >= '0' and s[j] <= '9')
                {
                    x += s[j];
                }
                else
                {
                    break;
                }
            }
            for (int j = 0; j < x.size(); j++)
            {
                xuly *= 10;
                xuly += (x[j] - 48);
            }
            x = "";
            ans += maxx*xuly;
            xuly = 0;
        }
    }
    cout << ans;
}