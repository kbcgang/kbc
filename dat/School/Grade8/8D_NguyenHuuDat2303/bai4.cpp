#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int t;
main()
{
    freopen("bai4.inp","r",stdin);
    freopen("bai4.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        int dem[150]={},m=1;
        cin>>s;
        s=' '+s;
        for(int i=1;i<s.size();i++)
            dem[s[i]]++;
        for(int i=1;i<s.size();i++)
        if(dem[s[i]]==1){
            cout<<i<<"\n";
            m=0;
            break;
        }
        if(m) cout<<"-1\n";
    }
}
