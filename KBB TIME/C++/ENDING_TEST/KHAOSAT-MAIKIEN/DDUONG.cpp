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
int ans, do_dai,n ;
kien a[100005], sum, k;
map<kien, int> pp;
JAV() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    pp[0] = 0;
    for (int i = 1; i <= n; ++i) 
    {
        cin >> a[i];
        sum += a[i];
        kien ktr = sum - k * i;
        if (pp.count(ktr)) 
        {
            int l = pp[ktr];
            int len = i - l;
            if (len > do_dai or (len == do_dai and l + 1 < ans)) 
            {
                do_dai = len;
                ans = l + 1;
            }
        } 
        else 
        {
            pp[ktr] = i;
        }
    }

    if (do_dai == 0) 
        cout << 0;
    else 
        cout << ans << '\n' << do_dai;

    return 0;
}
// 4 5
// 2 4 5 6
