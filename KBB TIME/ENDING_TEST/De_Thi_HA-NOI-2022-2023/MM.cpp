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
kien n, k, m, ans, a[1000000];
string s, x;
unordered_map <string, int> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin >> s;
	s += '!';
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= '0' and s[i] <= '9')
		{
			x += s[i];
		}
		else if (s[i-1] >= '0' and s[i - 1] <= '9')
		{
			pp[x]++;
			if (pp[x] == 1)
			{
				ans++;
			}
			x = "";
		}
	}   
	cout << ans; 
}
    