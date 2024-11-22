#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[105],dem[15],ans;

main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        dem[a[i]%9]++;
    }
    for(int i=1;i<=4;i++)
        ans+=dem[i]*dem[9-i];
    cout<<ans+((dem[0]-1)*dem[0])/2;
}
