///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,r,c;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>r>>c;
    //first
    int row=sqrt(n);
    if(row*row!=n) row++;
    if(row%2==0)
        cout<<row<<" "<<n-(row-1)*(row-1)<<"\n";
    else cout<<row<<" "<<row*row-n+1<<"\n";
    //second
    if(r%2==0)
        n=c+(r-1)*(r-1);
    else
        n=r*r-c+1;
    cout<<n;
}
