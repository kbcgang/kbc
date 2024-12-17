///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI03.INP", "r"))
    {
        freopen("BAI03.INP", "r", stdin);
        freopen("BAI03.OUT", "w", stdout);
    }
    getline(cin ,s);
    for (int i = 0; i < s.size() ; i++)
    {
        dem += s[i]-48;
    }
    k = sqrt(dem);
    if (k*k == dem)
    {
        cout << dem;
    }
    else
    {
        cout << dem%11;
    }
}