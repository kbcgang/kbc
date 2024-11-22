#include<bits/stdc++.h>
#define int long long
using namespace std;
int check(int n)
{
    int s=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            s+=i+n/i;
        if(i*i==n)
            s-=i;
    }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b;
    cin>>a>>b;
    if(a==check(b)&&b==check(a))
        cout<<"YES";
    else cout<<"NO";

}
