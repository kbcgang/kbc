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

JAV() 
{    
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        if (x == n) 
        {
            for (int i = 0; i < n; i++) 
            	cout << i << ' ';
        } else 
        {
            for (int i = 0; i < x; i++) 
            	cout << i << ' ';
            for (int i = x + 1; i < n; i++) 
            	cout << i << ' ';
            cout << x;
        }
        cout << '\n';
    }
}
