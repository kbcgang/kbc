#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,n;
main()
{
    if(fopen("CAU1.inp","r")){
        freopen("CAU1.inp","r",stdin);
        freopen("CAU1.out","w",stdout);
    }
    cin>>a>>n;
    if(n>0&&n<=a) cout<<n<<" 0";
    else if(n>a&&n<=2*a) cout<<a<<" "<<n-a;
    else if(n>2*a&&n<=3*a) cout<<abs(n-3*a)<<" "<<a;
    else if(n>3*a&&n<=4*a) cout<<0<<" "<<abs(n-4*a);
}
