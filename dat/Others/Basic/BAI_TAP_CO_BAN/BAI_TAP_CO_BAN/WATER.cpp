///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t,a,b,c;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a==c||b==c) cout<<"YES\n";
	else if(c>a&&c>b) cout<<"NO\n";
        else
        {
            if(c%(__gcd(a,b))==0)
                cout<<"YES\n";
            else cout<<"NO\n";	

        }
    }
}
