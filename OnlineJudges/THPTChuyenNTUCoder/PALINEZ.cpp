#include<bits/stdc++.h>
using namespace std;
string s;
int m,l,r;
string check(string s,int l,int r)
{
    for(int i=l;i<=(l+r)/2;i++)
        if(s[i]!=s[r-(i-l)])
            return "NO";
    return "YES";
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    s=' '+s;
    cin>>m;
    while(m--){
        cin>>l>>r;
        cout<<check(s,l,r)<<"\n";
    }
}
