#include<bits/stdc++.h>
#define int long long
using namespace std;
string check(int n)
{
    while(n>0)
    {
        if(n%10!=8&&n%10!=6)
            return "NO";
        n/=10;
    }
    return "YES";
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cout<<check(n);
}
