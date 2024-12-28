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
    string s,x;
    getline(cin , s);
    s += 'l';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' and s[i] <= '9')
        {
            x += s[i];
        }
        else if (s[i-1] >= '0' and s[i-1] <= '9')
        {
            cout << x << "\n";
            x = "";
            dem++;
        }
    }
    if (dem == 0)
    {
        cout << -1;
    }
    return 0;
}