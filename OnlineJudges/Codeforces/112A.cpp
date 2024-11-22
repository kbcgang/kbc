///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
string s1,s2;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s1>>s2;
    for(int i=0; i<s1.size(); i++)
        if(s1[i]<='Z')
            s1[i]+=32;
    for(int i=0; i<s2.size(); i++)
        if(s2[i]<='Z')
            s2[i]+=32;
    if(s1>s2) cout<<1;
    else if(s2>s1) cout<<-1;
    else cout<<0;
}
