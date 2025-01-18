///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,le, a;
kien maxx,minn, vtr,ans,l,r,chan;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            chan++;
        }
        else
        {
            le++;
        }
        dem += a;
    }
    if (dem % 2 == 0)
    {
        ans = (chan*(chan-1) / 2) + (le*(le-1) / 2);
    }
    else
    {
        ans = chan*le;
    }
    cout << ans;

}