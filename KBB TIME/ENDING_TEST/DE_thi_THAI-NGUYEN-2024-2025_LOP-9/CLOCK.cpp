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
kien h,m,s,t;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> h >> m >> s >> t;
    while (t > 0)
    {
    	t--;
    	s++;
    	if (s == 60)
    	{
    		s = 0;
    		m++;
    	}
    	if (m == 60)
    	{
    		m = 0;
    		h++;
    	}
    }
    cout << h << ' ' << m << ' ' << s;
}
    