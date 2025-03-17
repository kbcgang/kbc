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
kien n,k,m,dem,ans;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
    	if (n % i == 0)
    	{
    		ans += i;
    		if (n / i != i)
    		{
    			ans += n / i;
    		}
    	}
    }
    ans++;
    if (ans >= n)
    {
    	cout << 0;
    }
    else
    {
    	cout << 1;
    }
}
/// rất là phức tạp hóa vấn đề luôn
