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
kien n,k,m,dem, a, b;
kien maxx,minn, vtr,ans,l,r;
kien x, y;
unordered_map <int, int> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        cin >> a;
        pp[a]++;
    }
    cin >> y;
    for (int i = 1; i <= y; i++) {
        cin >> b;
        pp[b]++;
    }
    for (int i = 1; i <= n; i++) {
        if (pp[i] == 0) {
            cout << "LOSE";
            exit(0);
        }
    }
    cout << "WIN";
}