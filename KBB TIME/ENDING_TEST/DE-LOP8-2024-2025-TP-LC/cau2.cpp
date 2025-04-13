/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
string s, x;
kien dem, vtr;
unordered_map <int, string> pp;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin , s);
    s += ' ';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            x += s[i];  
        }
        else if (s[i-1] >= 'a' and s[i-1] <='z' and s[i] == ' ')
        {
            dem++;
            pp[dem] = x;
            x = "";
        }
    }
    cout << dem << "\n";
    for (int i = 1; i <= dem; i++)
    {
        cout << pp[i] << "\n";
    }
}
