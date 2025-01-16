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
kien n,k,m;
kien maxx,minn, vtr,ans,l,r;
unordered_map <char, int> pp, pp1;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string x, y;
    cin >> x;
    cin >> y;
    for (int i = 0; i < x.size(); i++)
    {
        pp[x[i]]++;
    }
    for (int i = 0; i < y.size(); i++)
    {
        pp1[y[i]]++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (pp[i] > 0 and pp1[i] > 0)
        {
            cout << char(i) << "\n";
        }
    }

}