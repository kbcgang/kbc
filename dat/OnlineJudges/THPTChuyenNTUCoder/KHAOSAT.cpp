#include<bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int ans=0,n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
            cout<<s[s.size()-1]<<s[0]<<"\n";
        ans+=s[0]-48;
    }
    cout<<ans;

}
