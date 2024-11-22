#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[1000055], s = 0;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n=0;
    while (cin>>a[n])
    {
        s += a[n];
        n++;
    }
    n-=1;
    for (int i = 1; i <= n; i++)
        if (a[i] == n)
        {
            cout << s - a[i];
            return 0;
        }
}