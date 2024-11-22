#include<bits/stdc++.h>
#define int long long
using namespace std;
int snt[10000005],dem,s,t[10000005],gay[10000005];
void check()
{
    for(int i=2;i<=1e7;i++)
    if(gay[i]==0){
        dem++;
        s+=i;
        t[i]+=s;
        snt[i]+=dem;
        for(int j=i)
    }
}
int n,a,b;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    check();
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        int m=a;
        while(snt[a]==0) a++;
        while(snt[m]==0) m--;
        while(snt[b]==0) b--;
        cout<<fixed<<setprecision(2)<<1.0*(t[b]-t[m])/(snt[b+1]-snt[a+1]+1)<<"\n";
    }
}
