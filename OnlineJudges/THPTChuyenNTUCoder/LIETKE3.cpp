///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
string s;
vector<string> ans;
void check(int i,string a)
{
    if(i==s.size())
    {
        if(a.size()>0)
            ans.push_back(a);
        return ;
    }
    check(i+1,a+s[i]);
    check(i+1,a);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    check(0,"");
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        if(ans[i]!=ans[i+1])
        cout<<ans[i]<<"\n";
}   