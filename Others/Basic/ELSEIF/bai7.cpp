#include<bits/stdc++.h>
#define int long long 
using namespace std;
string n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int s=0,s1=0;
    for(int i=0;i<2;i++)
        s+=n[i]-48;
    for(int i=2;i<n.size();i++)
        s1+=n[i]-48;
    if(s==s1) cout<<"YES";
    else cout<<"NO";
}