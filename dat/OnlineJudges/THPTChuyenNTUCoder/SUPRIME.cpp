#include<bits/stdc++.h>
#define int long long
using namespace std;
bool check(int n)
{
    if(n<2) return 1;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 1;
    return 0;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    while(n>0)
    {
        if(check(n))
        {
            cout<<"NO";
            return 0;
        }
        n/=10;
    }
    cout<<"YES";

}
