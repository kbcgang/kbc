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
kien n,k,m,dem,f[100000];
kien maxx,minn, vtr,ans,l;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        f[s[i]]++;
    }
    m = *max_element(f, f + 1 + 39);
    for (int i = 1; i <= 239; i++)
    {
        if (m == f[i])
        {
            cout << char(i);
            cout << "\n" << f[i];
            exit(0);
        }
    }
}