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
unordered_map <int, int> pp;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> n >> k;
    while (n--)
    {
        cin >> s;
        pp[s.size() + 1]++;
    }
    for (int i = 1; i <= k; i++)
    {
        cout << i << " ";
        for (int j = 1; j <= pp[i]; j++)
        {
            cout <<'*';
        }
        cout << "\n";
    }
}  