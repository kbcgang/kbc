#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, k, dem;
vector<int> a;
vector<int> res;

void bitmask(int k) {
    for (int i = 0; i < (1 << k); i++) {
        dem = 0;
        res.clear();
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) {
                res.push_back(a[j]);
                dem++;
            }
        }
        if (res.size() == k) {
            for (int l = 0; l < res.size(); l++) {
                cout << res[l] << " ";
            }
            cout << '\n';
        }
    }
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin >> n >> k;
	a.resize(n);
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	bitmask(k);
	return 0;
}
