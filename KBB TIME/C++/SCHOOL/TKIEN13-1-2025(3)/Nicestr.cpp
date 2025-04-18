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
kien n,k,m,dema, demb;
kien maxx,minn, vtr,ans, thien;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a')
            {
                dema++;
            }
            else if (s[i] == 'b')
            {
                demb++;
            }
        }
        if (dema == demb)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
        dema = 0;
        demb = 0;
    }
}