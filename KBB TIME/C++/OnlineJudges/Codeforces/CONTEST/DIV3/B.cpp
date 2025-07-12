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
int t, n , k;
string s;

JAV() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) 
    {
        cin >> n >> k;
        cin >> s;
        int dem0 = 0;
        for (char c : s) 
        {
            if (c == '0') ++dem0;
        }
        int dem1 = n - dem0;
        int nua = n / 2;
        int vtr = nua - k; 
        bool ktr = (0 <= vtr and vtr <= nua) and
                     (dem0 >= vtr and dem1 >= vtr) and
                     ((dem0 - vtr) % 2 == 0) and
                     ((dem1 - vtr) % 2 == 0);
        if (ktr) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
