#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int k,n;
bool check(string s)
{
    for(int i=0; i<s.size()/2; i++)
        if(s[i]!=s[s.size()-i-1])
            return 0;
    return 1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    cin>>s;
    for(int i=0; i<=k; i++)
    {
        string ans;
        for(int j=i; j<s.size()-k+i; j++)
        {
            ans+=s[j];
        }
        if(check(ans))
        {
            cout<<ans;
            return 0;
        }
    }
    cout<<"No";
}
