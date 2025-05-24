/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
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
kien a[1005], u[1005];
int n, t, m;

JAV() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin >> t;
    while (t--) 
    {
        cin >> n;
        for (int i = 1; i <= n; i++) 
        	cin >> a[i];
        m = 0;
        for (int i = 1; i <= n; i++) 
        	u[++m] = a[i];
        sort(u + 1, u + m + 1);
        m = unique(u + 1, u + m + 1) - u - 1;
        bool ktr = false;
        for (int i = 1; i <= m && !ktr; i++) {
            kien vtr = u[i];
            int BB = 0, cntC = 0;
            for (int j = 1; j <= n; j++) {
                if (a[j] == vtr) BB++;
                else cntC++;
            }
            if (BB > 0 && cntC > 0) {
                kien g = 0;
                for (int j = 1; j <= n; j++) {
                    if (a[j] != vtr) {
                        if (g == 0) g = a[j];
                        else g = __gcd(g, a[j]);
                    }
                }
                if (g != vtr) {
                    cout << "Yes\n";
                    for (int j = 1; j <= n; j++) {
                        if (a[j] == vtr) cout << 1 << " ";
                        else cout << 2 << " ";
                    }
                    cout << "\n";
                    ktr = true;
                }
            }
        }

        if (!ktr) cout << "No\n";
    }
}
