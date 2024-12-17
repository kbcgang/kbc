//Sự khác biệt giữa những người thành công và những người thất bại
//không phải là ở kỹ năng, kiến thức hay sự hiểu biết, mà nó nằm ở Ý CHÍ.
#include <bits/stdc++.h>
using namespace std;
long long n,k,m,dem,f[1000000], a[1000000];

bool ktr(long long n)
{
    if (n < 10)
        return false;
    long long dem = 0;
    dem = n % 10;
    n /= 10;
    while (n > 0)
    {
        if (dem > n % 10)
        {
            dem = n % 10;
            n /= 10;
        }
        else
        {
            return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    if(fopen("Bacthang.inp", "r")) {
        freopen("Bacthang.inp", "r", stdin);
        freopen("Bacthang.out", "w", stdout);
    }
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (ktr(a[i]) == true)
        {
            dem++;
        }
    }
    cout << dem;
}
