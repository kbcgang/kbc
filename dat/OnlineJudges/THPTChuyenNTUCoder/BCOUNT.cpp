#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,x,l,r,dem1[100005],dem2[100005],dem3[100005],q;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>x;
        dem1[i]=dem1[i-1];
        dem2[i]=dem2[i-1];
        dem3[i]=dem3[i-1];
        if(x==1)
            dem1[i]++;
        else if(x==2)
            dem2[i]++;
        else if(x==3)
            dem3[i]++;
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<dem1[r]-dem1[l-1]<<" "<<dem2[r]-dem2[l-1]<<" "<<dem3[r]-dem3[l-1]<<"\n";
    }
}