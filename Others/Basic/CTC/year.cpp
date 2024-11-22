#include<bits/stdc++.h>
#define int long long
using namespace std;
bool check(int n)
{
    string s;
    while(n>0)
    {
        s+=char(n%10+48);
        n/=10;
    }
    for(int i=0;i<s.size()-1;i++)
        for(int j=i+1;j<s.size();j++)
            if(s[i]==s[j])
                return 0;
    return 1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=n+1; ;i++)
    {
        if(check(i))
        {
            cout<<i;
            return 0;
        }
    }
}
