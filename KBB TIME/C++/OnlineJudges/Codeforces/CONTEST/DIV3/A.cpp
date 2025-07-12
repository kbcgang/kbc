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
int t; 
string s; 

JAV() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) 
    {
        cin >> s;
        int n = stoi(s); 
        int k = int(sqrt(n) + 0.5);
        if (k * k != n or k > 99) {
            cout << -1 << '\n';
        } else {
            cout << 0 << ' ' << k << '\n'; 
        }
    }

    return 0;
}
