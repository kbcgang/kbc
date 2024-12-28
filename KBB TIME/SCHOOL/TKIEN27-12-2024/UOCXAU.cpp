///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,x,c,tmp;
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        tmp += s[i];
        if (s.size() % (i + 1) == 0)
        {
            dem = s.size() / (i + 1);
            for (int j = 1; j <= dem; j++)
            {
                x += tmp;
            }
            if (x == s)
            {
                cout << tmp;
                return 0;
            }
            x = "";
        }
    }
}