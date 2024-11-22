#include<bits/stdc++.h>
#define int long long
using namespace std;
int check(string a, string b)
{
    int s=0;
    for(int i=0;i<a.size();i++)
        for(int j=0;j<b.size();j++)
            s+=(a[i]-48)*(b[j]-48);
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin>>a>>b;
cout<<check(a,b);
}
