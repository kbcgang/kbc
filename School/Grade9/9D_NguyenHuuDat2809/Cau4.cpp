///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string s;
int dem;
string ans;
vector<string> a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(cin>>s)
    {
        a.push_back(s);
        dem++;
        if(s.size()>ans.size())
            ans=s;
    }
    for(int i=0;i<a.size();i++)
    {
        if(i==a.size()-1)
            cout<<a[i]<<"\n"<<ans<<"\n"<<dem;
        else cout<<a[i]<<" ";
    }
}