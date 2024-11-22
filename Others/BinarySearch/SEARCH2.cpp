#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m,a[1000005],x;
int chop(int s)
{
    int ans=LLONG_MAX;
    int dau=0,cuoi=n-1;
    while(dau<=cuoi){
        int giua=(dau+cuoi)/2;
        if(a[giua]==s){
            ans=min(ans,giua+1);
            cuoi=giua-1;
        }
        else if(a[giua]>s)
            cuoi=giua-1;
        else dau=giua+1;
    }
    if(ans!=LLONG_MAX)
        return ans;
    return 0;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++){
        cin>>x;
        cout << chop(x)<<" ";
    }
}