///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int k;
string s;
vector<long> ans;
long long a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>k;
    cin>>s;
    if(k==0)
    {
        cout<<0;
        exit(0);
    }
    // k--;
    ans.push_back(0);
    for(int i=0;i<s.size();i++)
        if(s[i]=='1')
            ans.push_back(ans[ans.size()-1]+i);
    for(int i=1;i<=ans.size()-k;i++)
    {
        if(i==ans.size()-k)
        {
            a+=(ans[i+k-1]-ans[i+k-2])*(s.size()-ans[i]);
            break;
        }
        if(i==1)
        {
            a+=(ans[i]+1)*(ans[i+k]-ans[i+k-1]);
        }
        else if(i>0)
            a+=(ans[i]-ans[i-1])*(ans[i+k]-ans[i+k-1]);
    }
    cout<<a;
}