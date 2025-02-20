///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <iostream>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[Million];
kien maxx,minn, vtr,ans,l,r;
string s;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'W' or s[i] == 'A' or s[i] == 'R')
            {
                ans = max(ans, dem);
                dem = 0;
            }
            else
            {
                dem++;
            }
        }
        ans = max(ans, dem);
        f[ans]++;
        if (maxx < ans)
        {
            maxx = ans;
        }
        ans = 0;
        dem = 0;
    }
    cout << maxx << " " << f[maxx];
}