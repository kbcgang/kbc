/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
int ans, t;
// đi tìm chữ giống nhau gần nhau nhất
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
    cin >> t;
    map<char, int> dem;
    while (t--)
    {
        ans = 0;
        cin >> s;
        s = ' ' + s;
        for (int i = 1; i < s.size(); i++)
        {
            dem[s[i]]++;
            if (dem[s[i]] =2)
            {
                ans += 2;
                dem.clear();
            }
        }
        cout <<s.size()- ans << "\n";
        // cout<<dem.size()<<"\n";
        dem.clear();
        // for(auto i:dem)
        //     cout<<i.second<<" ";
        // cout<<"\n";
    }
}