#include<bits/stdc++.h>
#define int long long
using namespace std;

int check(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return n;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int s=0;
    for(int i=2;i<=n;i++)
    {
        s+=check(i);
    }
    if(check(s)>0)
        cout<<"YES";
    else cout<<"NO";
}
