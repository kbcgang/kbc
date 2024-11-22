#include<bits/stdc++.h>
#define int long long
using namespace std;
int t;
int check(string s)
{
    int a[150]={};
    for(int i=0;i<s.size();i++)
        a[s[i]]++;
    for(int i=0;i<s.size();i++)
        if(a[s[i]]==1)
            return i+1;
    return -1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    if(fopen(".inp","r")){
//        freopen(".inp","r",stdin);
//        freopen(".out","w",stdout);
//    }
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<check(s)<<"\n";
    }
}
