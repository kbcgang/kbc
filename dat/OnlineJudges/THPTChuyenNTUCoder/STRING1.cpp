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
    int ans=0;
    for(int i=0;i<b.size()-a.size()+1;i++)
    {
        int t=b.find(a,i);
        if(t!=-1)
        {
            ans++;
            i=t+a.size()-2;
        }
        else break;
    }
    cout<<ans;
}