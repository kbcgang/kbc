///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];
string s,x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline (cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' and s[i] <= '9')
        {
            x += s[i];
        }
        else if (s[i-1] >= '0' and s[i - 1] <= '9')
        {
            dem++;
            for (int j = 0; j < x.size(); j++)
            {
                a[dem] *= 10;
                a[dem] += (x[j] - 48);
            }
            x = "";
        }
    }
    sort(a + 1,a + 1 + dem);
    for (int i = 1; i <= dem; i++)
    {
        cout << a[i] << " ";
    }
}