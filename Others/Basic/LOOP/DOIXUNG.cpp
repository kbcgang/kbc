#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
string check(string s)
{
    for(int i=0;i<s.size()/2;i++)
        if(s[i]!=s[s.size()-i-1])
            return "NO";
    return "YES";
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    cout<<check(s);
}
