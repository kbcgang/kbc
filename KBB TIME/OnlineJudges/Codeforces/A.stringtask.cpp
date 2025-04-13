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
string s, x;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
    {
    	if (s[i] != 'U' and s[i] != 'E' and s[i] != 'O' 
    		and s[i] != 'A' and s[i] != 'I' and s[i] != 'u' 
    		and s[i] != 'e' and s[i] != 'o' 
    		and s[i] != 'a' and s[i] != 'i')
    	{
    		if (s[i] >= 'A' and s[i] <= 'Z')
    		{
    			x += '.';
    			x += + (s[i] + 32);	
    		}
    		else
    		{
    			x += '.';
    			x += + s[i];
    		}
    	}
    }
    cout << x;
}
    