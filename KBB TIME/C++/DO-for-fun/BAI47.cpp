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
int n, k, m, dem, ans;
unordered_map <int, string> pp; 
unordered_map <string, int> pp1;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  	string s;
  	string c;
  	cin >> s;
  	s += 'a';
  	dem = 1;
  	for (int i = 0; i < s.size(); i++) {
  		if (s[i] >= '0' and s[i] <= '9') {
  			pp[dem] += s[i];
  		}
  		else if (s[i-1] >= '0' and s[i-1] <= '9') {
  			int k = 0;
  			while (pp[dem][k] == '0') {
  				k++;
  			}
  			for (int j = k; j < pp[dem].size(); j++) {
  				c += pp[dem][j];
  			}
  			if (pp1[c] == 0) {
  				ans++;
  				pp1[c]++;
  			}
  			c = "";
  			dem++;
  		}
  	}
  	cout << ans;
}
    