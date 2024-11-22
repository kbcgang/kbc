#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,c;
int gay(int n)
{
    return (n%c*n%c)%c;
}
int check(int a, int b) {
    if (b == 0) return 1;
    else
        if (b % 2 == 0)
            return (gay(check(a,b/2)))%c;
        else
            return (a%c * gay(check(a,b/2)))%c;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c;
    a=a%c;
    cout<<check(a,b)%c;
}
