/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[NT + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin, s);
    if (s[0] == 'I' and s[1] == ' ') {
    	cout << "am";
    } 
    else if (s[0] == 'H' and s[1] == 'e' and s[2] == ' ') {
    	cout << "is";
    }
    else if (s[0] == 'S' and s[1] == 'h' and s[2] == 'e' and s[3] == ' ') {
    	cout << "is";
    }
    else if (s[0] == 'I' and s[1] == 't' and s[2] == ' ') {
    	cout << "is";
    }
    else if (s[0] == 'W' and s[1] == 'e' and s[2] == ' ') {
    	cout << "are";
    }
    else if (s[0] == 'T' and s[1] == 'h' and s[2] == 'e' and s[3] == 'y' and s[4] == ' ') {
    	cout << "are";
    }
    else if (s[0] == 'Y' and s[1] == 'o' and s[2] == 'u' and s[3] == ' ') {
    	cout << "are";
    }
    else {
    	cout << "is";
    }
} 
    