///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t,n,a[105];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        if(a[0]==1) cout<<"YES\n";
        else
        {
            int tam=1;
            for(int i=0; i<n-1; i++)
                if(a[i+1]%a[i]!=0)
                {
                    cout<<"YES\n";
                    tam=0;
                    break;
                }
            if(tam) cout<<"NO\n";
        }
    }
}
