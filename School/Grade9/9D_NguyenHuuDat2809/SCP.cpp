///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int q;
long long l,r;
main()
{
    if(fopen("SCP.inp","r")){
        freopen("SCP.inp","r",stdin);
        freopen("SCP.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        long long m=sqrt(r);
        if(m*m>r) m--;
        long long k=sqrt(l);
        if(k*k<l) k++;
        cout<<m-k+1<<"\n";
    }
}