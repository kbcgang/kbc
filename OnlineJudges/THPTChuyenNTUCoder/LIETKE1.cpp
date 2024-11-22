#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
vector<string> ans;
void lietke1(int n,string s,vector<string>& ans)
{
    if(s.size()==n)
    {
        ans.push_back(s);
        return;
    }
    lietke1(n,s+'A',ans);
    if(s.back()=='A'||s.size()==0)
        lietke1(n,s+'B',ans);
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
    lietke1(n,"",ans);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<"\n";
}
