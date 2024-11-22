///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int g,l,ans=INT_MAX,m;
vector<int> a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>g>>l;
//    g=1,l=1e9;
    if(l%g!=0) cout<<-1;
    else if(l==g) cout<<l*2;
    else
    {
        for(int i=sqrt(l/g);i>=1;i--)
        {
            if((l/g)%i==0)
            {
                cout<<(i+(l/g)/i)*g;
                return 0;
            }
        }
    }
}
