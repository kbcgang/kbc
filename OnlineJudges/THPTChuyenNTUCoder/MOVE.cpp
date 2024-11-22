#include<bits/stdc++.h>
using namespace std;
int m,n,a[505][505],ans[505][505];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=m;i++)
        ans[i][1]=ans[i-1][1]+a[i][1];
    for(int i=1;i<=n;i++)
        ans[1][i]=ans[1][i-1]+a[1][i];
    for(int i=2;i<=m;i++)
        for(int j=2;j<=n;j++)
            ans[i][j]=max(ans[i-1][j],ans[i][j-1])+a[i][j];
    cout<<ans[m][n];
}
