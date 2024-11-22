#include<bits/stdc++.h>
#define int long long 
using namespace std;
string s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    int ans=0,dem=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
            dem=1;
        ans+=s[i]-48;
    }
    if(ans%3==0&&dem){
        sort(s.begin(),s.end(),greater<char>());
        cout<<s;
    }
    else cout<<-1;
}