#include<bits/stdc++.h>
#define int long long 
using namespace std;
string s,s1,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s>>s1;
    while(s.size()>s1.size())
        s1='0'+s1;
    while(s.size()<s1.size())
        s='0'+s;
    int du=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        int m=s[i]-48+s1[i]-48;
        if(du==1){
            m+=1;
            du=0;
        }
        if(m>9)
        {
            ans=char(m%10+48)+ans;
            du=1;
        }
        else
            ans=char(m+48)+ans;
    }
    if(du==1) ans='1'+ans;
    cout<<ans;
}