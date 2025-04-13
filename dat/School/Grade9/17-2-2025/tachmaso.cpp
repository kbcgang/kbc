/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
vector<string> a;
bool cmp(string a, string b)
{
    while (a.size() < b.size())
        a = '0' + a;
    while (a.size() > b.size())
        b = '0' + b;
    return a < b;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            string x = "";
            while (s[i] >= '0' && s[i] <= '9' && i < s.size())
            {
                x = x + s[i];
                i++;
            }
            a.push_back(x);
        }
    }
    sort(a.begin(), a.end(), cmp);
    for (auto i : a)
        cout << i << " ";
}