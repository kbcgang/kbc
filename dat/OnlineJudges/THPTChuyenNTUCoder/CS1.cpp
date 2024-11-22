///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
string s;
char ans='0';
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='9'){
            cout<<9;
            return 0;
        }
        ans=max(ans,s[i]);
    }
    cout<<ans;
}
