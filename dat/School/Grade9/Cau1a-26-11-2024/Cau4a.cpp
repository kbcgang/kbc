/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
vector<string> ans;
bool compare(string a, string b)
{
    if (a.size() == b.size())
        return a <= b;
    return a.size() < b.size();
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
    string a;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            a.push_back(s[i]);
        else
        {
            if (a.empty() == 0)
            {
                while (a[0] == '0')
                    a.erase(0, 1);
                if (a.empty())
                    ans.push_back("0");
                else
                    ans.push_back(a);
            }
            a = "";
        }
    }
    if (a.empty() == 0)
    {
        while (a[0] == '0')
            a.erase(0, 1);
        if (a.empty())
            ans.push_back("0");
        else
            ans.push_back(a);
    }
    sort(ans.begin(), ans.end(), compare);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}