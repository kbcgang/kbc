/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
string a;
vector<string> n;
string ans;
string get_greatest(string a, string b)
{
    if (a.size() > b.size())
        return a;
    else if (b.size() > a.size())
        return b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
            return a;
        else if (b[i] > a[i])
            return b;
    }
    return a;
}
// bool compare(string a, string b)
// {
//     if (a.size() == b.size())
//         for (int i = 0; i < a.size(); i++)
//         {
//             if(a[i]!=b[i])
//                 return b<a;
//         }
//     return b < a;
// }
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
        if (s[i] > '0' && s[i] <= '9')
        {
            while (i < s.size() && s[i] >= '0' && s[i] <= '9')
            {
                a.push_back(s[i]);
                i++;
            }
            n.push_back(a);
            a = "";
        }
    }
    // sort(n.begin(), n.end(), compare);
    // for (int i = 0; i < n.size(); i++)
    //     cout << n[i] << " ";
    for(int i=0;i<n.size();i++)
        ans=get_greatest(ans,n[i]);
    cout<<ans;
}