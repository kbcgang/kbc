#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("PASS.inp","r"))
    {
        freopen("PASS.inp","r",stdin);
        freopen("PASS.out","w",stdout);
    }
    cin>>n;
    while(n--)
    {
        string s;
        getline(cin,s);
        string ans,x;
        int c=0,d=0,dem[200]= { };
        while(d<s.size()&&c<s.size())
        {
            dem[s[c]]++;
            if(s[c]==' ')
            {
                while(s[c]==' ')
                    c++;
                d=c;
                if(x.size()>=ans.size())
                    ans=max(ans,x);
                x.erase();
                dem[200]= { };
                c--;
            }
            else
            {
                if(dem[s[c]]>1)
                {
                    if(x.size()>=ans.size())
                        ans=max(ans,x);
                    while(dem[s[c]]>2)
                    {
                        x.erase(0,1);
                        dem[s[d]]--;
                        d++;
                    }
                }
                x+=s[c];
            }
            c++;
        }
        cout<<ans<<"\n";
    }
}
