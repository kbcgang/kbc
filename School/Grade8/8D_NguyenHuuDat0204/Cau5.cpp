#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,a[100005],dem;
main()
{
    freopen("Cau5.inp","r",stdin);
    freopen("Cau5.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=i;j<n;j++){
            t+=a[j];
            if(t%k==0)
                dem++;
        }
    }
    cout<<dem;

}
