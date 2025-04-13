/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
// bool save = 1;
string ans;
string s;
long double maxx;
void sum(string a)
{
    string m = "";
    int s = 0;
    // int dem = 0;
    for (int i = 0; i < a.size(); i++)
        if (a[i] >= '0' && a[i] <= '9')
        {
            m.push_back(a[i]);
            s += a[i] - 48;
        }
    if (m.empty() == 0)
    {
        // save = 0;
        if (1.0 * s / m.size() > maxx)
        {
            maxx = 1.0 * s / m.size();
            ans = m;
        }
    }
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
    cin >> n;
    while (n--)
    {
        cin >> s;
        sum(s);
    }
    if (ans.empty())
        cout << 0;
    else
        cout << ans;
}