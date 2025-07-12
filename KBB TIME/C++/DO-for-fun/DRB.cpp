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
kien v1, s1, s2, v2;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s1 >> v1 >> s2 >> v2;
    if (s1 < s2 and v1 <= v2) {
    	cout << -1;
    }
    else if (s1 > s2 and v1 >= v2) {
    	cout << -1;
    }
    else
    {
    	cout << abs(s1 - s2) / (max(v1, v2) - min(v1, v2));
    }
  	return 0;
}
