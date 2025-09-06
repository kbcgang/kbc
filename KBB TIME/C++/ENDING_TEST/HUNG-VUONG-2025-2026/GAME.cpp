/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define JAV main
#define Million 1000000        
#define NT 10000000
#define MOD 1000000007
int n, m, dem, k[Million + 5], f[Million + 5] , a, b, t;
int maxx, minn, vtr, ans, l, r;
int dp[Million];

void sub1() {
	for (int i = 1; i <= n; i++) {
		if (t >= a) {
			t -= a;
			ans += k[i];
		}
		else {
			break;
		}
	}
	cout << ans;
}
int cau[Million];
void sub2() {
	int sum = 0;
	if (t / a == 0) {
		cout << 0;
	}
	else {
		for (int i = 1; i <= n; i++) {
			sum += a;
			if (sum <= t)
			cau[i] = 0;
			else {
				int gia = sum;
				while(gia > t) {
					cau[i]++;
					gia -= a;
					gia += b;
				}
			}
		}
		dp[1] = k[1];
		for (int i = 2; i <= n; i++) {
			dp[i] = f[i];
			sort (k + 1, k + 1 + i - 1);
			if (cau[i] >= n) break;
			for (int j = 1; j <= cau[i]; j++) {
				dp[i] -= k[j];
			}
			ans = max(ans, dp[i]);
		}
	}
	cout << ans;
}

void sub3() {
	if (t / a >= n) {
		cout << f[n];
		return;
	}
	ans = f[t / a];
	for (int i = 1; i <= n; i++) {
		if (t <= 0) {
			break;
		}
		else {
			t -= b;
			ans = max(ans, f[i + t / a] - f[i]);
		}
	}
	cout << ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // if (fopen("test.inp","r"))
    // {
    //     freopen("test.inp", "r", stdin);
    //     freopen("test.out", "w", stdout);
    // }
    cin >> n >> t >> a >> b;
    vtr = 0;
    k[0] = INT_MAX;
    for (int i = 1; i <= n; i++) {
    	cin >> k[i];
   		f[i] = f[i-1] + k[i];
   		if (k[i] > k[i - 1]) {
   			vtr++;
   		}
    } /// Gọi dp[i] là độ hấp dẫn lớn nhất khi duyệt đến i
    if (t / a >= n) {
    	cout << f[n];
    	exit(0);
    }
    if (vtr == 0) {
    	sub1();
    }
    else if (vtr == n - 1) {
    	sub3();
    }
    else if (n <= 1000) {
    	sub2(); 
    }
}
    



