#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
vector<string> ans;
void check(int i,string s,vector<string>& ans)
{
    if(i==s.size()-1){
        ans.push_back(s);
        return;
    }
    for(int j=i+1;j<s.size();j++)
    {
        swap(s[i],s[j]);
        check(i+1,s,ans);
        swap(s[i],s[j]);
        check(i+1,s,ans);
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    if(fopen(".inp","r")){
//        freopen(".inp","r",stdin);
//        freopen(".out","w",stdout);
//    }
    cin>>n;
    string s;
    for(int i=1;i<=n;i++)
        s+=char(i+48);
    check(0,s,ans);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        if(ans[i]!=ans[i+1])
            cout<<ans[i]<<"\n";
}
