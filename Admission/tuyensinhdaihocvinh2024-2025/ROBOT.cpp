#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int a[1005][1005];
int b;
int ans[1005][1005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    if(fopen(".inp","r")){
//        freopen(".inp","r",stdin);
//        freopen(".out","w",stdout);
//    }
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ans[j][i] = a[j][i] + max({ans[j - 1][i - 1], ans[j][i - 1], ans[j + 1][i - 1]});
//            cout << ans[j][i] << " ";
        }
//        cout << "\n";
    }
    for(int i = 0; i < n; i++)
        b = max(b, ans[i][m - 1]);
    cout << b;
}
