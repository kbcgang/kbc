///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
string a,b;
int ans[2505][2505];
int answer;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    for(int i=1;i<=a.size();i++)
    {
        for(int j=1;j<=b.size();j++)
        {
            ans[i][j]=ans[i][j-1];
            if(a[i-1]==b[j-1])
                ans[i][j]=ans[i-1][j-1]+1;
//            answer=max(ans[i][j],answer);
        }
    }
    cout<<ans[a.size()][b.size()];
}
