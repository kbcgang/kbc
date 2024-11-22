#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,ans1,ans2;
string s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[0]=='-') ans1++;
        else if(s[0]!='0') ans2++;
    }
    cout<<ans1<<" "<<ans2;
}