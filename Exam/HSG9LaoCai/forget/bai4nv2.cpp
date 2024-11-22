#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,x,dem;
bool perfectnum(int n)
{
    if(n<2) return 0;
    int s=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            s+=i+n/i;
        if(i*i==n)
            s-=i;
    }
    return s==n;
}
 main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(perfectnum(x))
            dem++;
    }
    cout<<dem;
}
