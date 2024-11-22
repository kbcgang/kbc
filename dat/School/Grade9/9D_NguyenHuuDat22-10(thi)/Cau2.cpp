///Kiên is unreliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
long ans;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        int t=0;
        while(s[i]>='0'&&s[i]<='9')
            t=t*10+(s[i]-48);
        ans+=t;
    }
    cout<<ans;
}