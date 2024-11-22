#include<bits/stdc++.h>
#define int long long 
using namespace std;
string s;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    sort(s.begin(),s.end());
    if(s[0]=='-') cout<<s[1];
    else cout<<s[0];
}