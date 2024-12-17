//Sự khác biệt giữa những người thành công và những người thất bại
//không phải là ở kỹ năng, kiến thức hay sự hiểu biết, mà nó nằm ở Ý CHÍ.
#include <bits/stdc++.h>
using namespace std;
long long n,k,m,dem,f[1000000], a[1000000];
long long maxx,minn, vtr,l[1000000],r[1000000], dp[1000000],dp1[1000000];
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    if(fopen("SCP.inp", "r")) {
        freopen("SCP.inp", "r", stdin);
        freopen("SCP.out", "w", stdout);
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> n >> k;
        cout << int(sqrt(k)) - int(sqrt(n - 1)) << "\n";
    }

}
