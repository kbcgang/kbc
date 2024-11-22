///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
string s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<='3'&&s[i]>='1'&&(s[i+1]>'3'||i==s.size()-1)){
            cout<<s[i];
        }
        else if(s[i]<='3'&&s[i]>='1')
            cout<<s[i]<<"+";
    }
}
