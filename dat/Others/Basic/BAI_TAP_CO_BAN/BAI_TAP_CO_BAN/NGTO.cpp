///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
bool snt[300005];
void check(int n)
{
    snt[0]=snt[1]=0;
    for(int i=2;i<=sqrt(n);i++)
        if(snt[i]==0)
        for(int j=i*i;j<=n;j+=i)
            snt[j]=1;
}
vector<vector<int>> ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    check(n);
            vector<int> a;
    for(int i=2;i<=n/2;i++)
        if(snt[i]==0&&snt[n-i]==0&&i!=n-i)
        {
            a.clear();
            a.push_back(i);
            a.push_back(n-i);
            ans.push_back(a);
        }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++)
        cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";

}
