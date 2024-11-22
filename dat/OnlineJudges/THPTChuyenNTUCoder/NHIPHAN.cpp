#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[21], t;
bool ans[2*530000][21];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        a[i] += t + 1;
        t += a[i];

    }
    for(int i = n; i > 0; i--)
    {
        int m = n-i+1;
        for(int j = 1 + a[m]; j <= 2*a[n]; j += a[m])
        {
            int pos = a[m];
            while(pos > 0)
            {
                ans[j][i] = 1;
                j++;
                pos--;
            }
        }
    }
    for(int i = 1; i <= 2*a[n]; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << ans[i][j];
        cout << "\n";
    }
}
