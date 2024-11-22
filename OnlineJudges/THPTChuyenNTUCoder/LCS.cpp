#include<bits/stdc++.h>
#define int long long
using namespace std;
int m,n;
string a,b;
int ans[2501][2501];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n>>a>>b;
    for(int i=1;i<=a.size();i++)
    for(int j=1;j<=b.size();j++){
        if(a[i-1]==b[j-1])
            ans[i][j]=ans[i-1][j-1]+1;
        else
            ans[i][j]=max(ans[i][j-1],ans[i-1][j]);
    }
    cout<<ans[a.size()][b.size()];
}
