#include<bits/stdc++.h>
#define int long long
using namespace std;
int k,a,b,p[1000000007];
void snt()
{
    for(int i=2;i<=sqrt(k);i++)
        if(p[i]==0)
            for(int j=i*i;j<=k;j+=i)
                p[j]=1;
}
main()
{
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>k>>a>>b;
    snt();

}
