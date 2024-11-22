#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
string s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>s;
        int t=1,a=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]) a++;
            else{
                t=max(t,a);
                a=1;
            }
        }
        ans=max(ans,t);
    }
    cout<<ans;
}
