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
kien maxx,minn, vtr,ans,l;
string s,x,c;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    ans = 1;
    cin.ignore();
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i ; j < s.size() - k + i; j++)
        {
            x += s[j];
        }
        c = x;
        reverse(x.begin(), x.end());
        if (c == x)
        {
            cout << c;
            exit(0);
        }
        x = "";
    }
    cout << "No";
}
    