///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[100005],highest,lowest,firstans,secondans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int highest=a[0],lowest=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<lowest){
            lowest=a[i];
            secondans++;
        }
        if(a[i]>highest)
        {
            highest=a[i];
            firstans++;
        }
    }
    cout<<firstans<<" "<<secondans;
}
