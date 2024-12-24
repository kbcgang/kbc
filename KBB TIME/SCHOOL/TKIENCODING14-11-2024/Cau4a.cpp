///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, f[10000];
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("Cau4a.INP", "r"))
    {
        freopen("Cau4a.INP", "r", stdin);
        freopen("Cau4a.OUT", "w", stdout);
    }
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        f[s[i]]++;
    }
    for (int i = 0; i <= 239; i++)
    {
        if (f[i] != 0)
        {
            cout << char(i) << " " << f[i] << "\n";
        }
    }
}
