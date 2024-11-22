#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
bool a[200005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Cau3.inp","r"))
    {
        freopen("Cau3.inp","r",stdin);
        freopen("Cau3.out","w",stdout);
    }
    cin>>n;
    int ans=n;
    for(int i=1; i<=n; i++) a[i]=1;
    cin>>k;
    while(k--)
    {
        int x,y;
        cin>>x>>y;
        swap(a[x],a[y]);
        if((x<=n&&y>n)||(x>n&&y<=n))
        {
            if(x<y)
            {
                if(a[x]==0)
                    ans--;
                else ans++;
            }
            else if(x>y)
            {
                if(a[y]==0)
                    ans--;
                else ans++;
            }
        }
        cout<<ans<<"\n";
    }
}
