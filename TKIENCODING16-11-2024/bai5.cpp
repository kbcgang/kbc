#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n,p,sum,t,a[1000000];

int main()
{
    if(fopen("bai5.INP", "r"))
    {
        freopen("bai5.INP", "r", stdin);
        freopen("bai5.OUT", "w", stdout);
    }
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] != a[n])
        {
            cout << a[i];
            exit(0);
        }
    }
    cout << a[n-1];
    exit(0);
}
