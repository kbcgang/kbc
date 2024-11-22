#include<bits/stdc++.h>
#define int long long
using namespace std;
bool check(int n)
{
    while(n>9)
    {
        int a=(n/10)%10,b=n%10;
        if(a>b) return 0;
        n/=10;
    }
    return 1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;

    while(n--)
    {
        int s;
        cin>>s;
        if(check(s)) cout<<"YES\n";
        else cout<<"NO\n";
    }

}
