#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int ans[100];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    if(fopen(".inp","r")){
//        freopen(".inp","r",stdin);
//        freopen(".out","w",stdout);
//    }
    getline(cin,s);
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>'9') break;
        ans[s[i]]++;
    }
    for(int i=48;i<=57;i++)
    {
        cout<<ans[i]<<" ";
    }
}
