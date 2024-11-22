#include<bits/stdc++.h>
#define int long long
using namespace std;
string s,t;
int ans,k,m;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Cau4.inp","r"))
    {
        freopen("Cau4.inp","r",stdin);
        freopen("Cau4.out","w",stdout);
    }
    cin>>s>>k;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            m++;
            i++;
            s[i]='1';
        }
        else if(s[i]==s[i-1]){
            m++;
            s[i]='1';
        }
    }
    ans+=m*k;
    if(s[0]==s[s.size()-1]&&s[0]!='1')
        ans+=k-1;
    cout<<ans;
}
