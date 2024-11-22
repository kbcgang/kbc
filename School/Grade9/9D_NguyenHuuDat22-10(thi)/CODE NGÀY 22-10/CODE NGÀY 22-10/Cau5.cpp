#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[500005],s,dem[500005];
map<int,int> cL,cR;
int32_t main() {
    cin>>n;
    cL[0]=1;
    cR[0]=1;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        s=s+a[i];
        dem[i+1]-=cL[s];
        cL[s]++;
    }
    s=0;
    for(int i=n; i>=1; i--) {
        s=s+a[i];
        dem[i]+=cR[s];
        cR[s]++;
    }
    for(int i=1; i<=n; i++) {
        dem[i]+=dem[i-1];
        cout<<dem[i]<<" ";
    }
}
