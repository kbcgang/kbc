///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000],ans;
unordered_map <int , int> pp;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("Cau3.INP", "r"))
    {
        freopen("Cau3.INP", "r", stdin);
        freopen("Cau3.OUT", "w", stdout);
    }
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pp[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (pp[a[i]] >= 2)
        {
            ans += pp[a[i]]/2;
            pp[a[i]] = 0;
        }
    }
    cout << ans;
}
