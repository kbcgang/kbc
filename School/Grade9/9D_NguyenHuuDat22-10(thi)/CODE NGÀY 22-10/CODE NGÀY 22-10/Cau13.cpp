#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int demuoc(int n) {
    int s=0;
    for(int i=1; i<=sqrt(n); i++)
        if (n%i==0)
            s=s+2;
    int x= (long long) sqrt(n);
    if (x*x==n)
        s--;
    return s;
}
int32_t main() {
    cin>>n>>m;
    int x=__gcd(m,n);
    cout<<demuoc(x);
}
