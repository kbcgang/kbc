/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int t; 
kien n, xx, ans;
JAV() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    cin >> t;
    while (t--) 
    {
        cin >> n;
        xx = n / 2;
        ans = xx * (n - xx) + 1;
        cout << ans << "\n";
    }
}
