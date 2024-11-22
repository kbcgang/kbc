///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int r,c;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int odd[5]= {0,2,4,6,8};
    int even[5]= {1,3,5,7,9};
    cin>>r>>c;
    if(r%2==1)
        cout<<odd[c-1]+10*(r/2);
    else
        cout<<even[c-1]+10*((r-1)/2);
}
