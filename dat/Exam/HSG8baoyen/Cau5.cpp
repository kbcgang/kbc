#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005];
bool check(int x) {
    int d=1,c=2,dem=1;
    while(c<=n) {
        while(a[c]<a[d]+x && c<=n)
            c++;
        if(c<=n)
            dem++;
        d=c;
        c++;
    }
    return dem>=m;
}
int bs(int l,int r) {
    while(l<r) {
        int mid=(l+r+1)/2;
        if(check(mid))
            l=mid;
        else
            r=mid-1;
    }
    return l;
}
main() {
    freopen("CAU5.INP","r",stdin);
    freopen("CAU5.OUT","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    cout<<bs(1,a[n]-a[1]);
}
