///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
int ans;
string s;
bool check(string s)
{
    for(int i=0;i<s.size()-1;i++)
        if(s[i]>=s[i+1]) return 0;
    return 1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s.size()>1)
        {
            ans+=check(s);
        }
    }
    cout<<ans;
}
