///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k;
kien a[10000000];

int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort (a,a + n);
	kien time = 0;
	for (int i = n - 1; i >= 0; i-= k)
	{
		time += 2 * (a[i] - 1);
	}
	cout << time;
	return 0;
}
    