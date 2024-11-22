///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string s;
string ans="1";
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
        char a='1';
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
            a++;
        else if(s[i]=='-')
            a--;
        if(a>'9')
        {
            cout<<0;
            exit(0);
        }
        if(a<'0')
        {
            cout<<0;
            exit(0);
        }
        ans.push_back(a);
    }
    cout<<ans;
}