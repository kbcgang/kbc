//Sự khác biệt giữa những người thành công và những người thất bại
//không phải là ở kỹ năng, kiến thức hay sự hiểu biết, mà nó nằm ở Ý CHÍ.
#include <bits/stdc++.h>
using namespace std;
long long n,k,m,dem;
long long chan,le, vtr;
long long l;
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    if(fopen("DEMUOC.inp", "r")) {
        freopen("DEMUOC.inp", "r", stdin);
        freopen("DEMUOC.out", "w", stdout);
    }
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        l = int(sqrt(k));
        if (l*l == k)
        {
            le++;
        }
        else
        {
            chan++;
        }
    }
    cout << chan << "\n" << le;
}
