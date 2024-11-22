///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
vector<string> ans;
void check(int dem,int t,string s)
{
    if(dem>0&&t==2*n)return;
    if(t==2*n)
    {
        ans.push_back(s);
        return;
    }
    if(dem>0)
        check(dem-1,t+1,s+')');
    if(dem<n)
        check(dem+1,t+1,s+'(');
    
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    check(0,0,"");
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<"\n";
}