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
int t;
kien x, y, lop, ans;

JAV() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) 
    {
        cin >> x >> y;
        lop = max(x, y);
        if (lop % 2 == 1) 
        {  
            if (x == lop) 
            {
                ans = (lop - 1) * (lop - 1) + y;
            } 
            else 
            {
                ans = lop * lop - x + 1;
            }
        } else 
        { 
            if (y == lop) 
            {
                ans = (lop - 1) * (lop - 1) + x;
            } 
            else 
            {
                ans = lop * lop - y + 1;
            }
        }
        cout << ans << "\n";
    }
}

