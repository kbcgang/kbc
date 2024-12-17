//Sự khác biệt giữa những người thành công và những người thất bại 
//không phải là ở kỹ năng, kiến thức hay sự hiểu biết, mà nó nằm ở Ý CHÍ.
#include <bits/stdc++.h>
using namespace std;
int n,k,m,dem,f[1000000], a[1000000];
int maxx,minn, vtr,ans,l,r, dp[1000000];

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    m = 1;
    for (int i = 1; i <= n; i++)
    {
        m = m * i % 1000000007;
    }
    cout << m;
}