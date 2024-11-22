#include <bits/stdc++.h>
#define int long long
using namespace std ;
int n, a[100005];
int demp, demn;
main()
{
    freopen("Cau3.inp", "r", stdin);
    freopen("Cau3.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]=a[i]*a[i];
    }
    sort(a, a + n);
    cout<<a[n-1]-a[0];
}