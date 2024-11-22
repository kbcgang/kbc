#include<bits/stdc++.h>
using namespace std;
int q;
string s;
int pos[260];
main()
{
    if(fopen("bai4.inp","r"))
    {
        freopen("bai4.inp","r",stdin);
        freopen("bai4.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>q;
    while(q--)
    {
        int ans=2001;
        cin>>s;
        s=' '+s;
        for(int i=1;i<s.size();i++)
        {
            if(pos[s[i]]!=0)
                pos[s[i]]=-1;
            else
                pos[s[i]]=i;
        }
        for(int i=0;i<259;i++)
            if(pos[i]!=0&&pos[i]!=-1)
                ans=min(ans,pos[i]);
        if(ans==2001)
            cout<<-1<<"\n";
        else cout<<ans<<"\n";
        for(int i=0;i<259;i++)
            pos[i]=0;
    }
}
