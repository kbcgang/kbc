#include<bits/stdc++.h>
#define int long long 
using namespace std;
string a,b;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    while(a.size()>b.size()) b='0'+b;
    while(a.size()<b.size()) a='0'+a;
    if(a>b) cout<<a;
    else cout<<b;
}