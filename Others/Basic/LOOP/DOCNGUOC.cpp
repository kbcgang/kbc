#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b;
int check(int n)
{
    int s=0;
    while(n>0)
    {
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
main()
{
    cin>>a>>b;
    cout<<max(check(a),check(b));
}
