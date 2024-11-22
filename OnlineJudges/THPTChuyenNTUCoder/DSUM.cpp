#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(int i=0;i<s.size();i++)
        ans+=s[i]-48;
    cout<<ans;

}
