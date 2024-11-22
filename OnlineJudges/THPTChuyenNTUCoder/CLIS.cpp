#include<bits/stdc++.h>
//#define int long long
using namespace std;
string s;
int ans,f[205];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    s=' '+s;
    for(int i=1;i<s.size();i++){
        for(int j=0;j<i;j++)
            if(s[i]>=s[j])
                f[i]=max(f[i],f[j]+1);
        ans=max(ans,f[i]);
    }
    cout<<ans;
}
