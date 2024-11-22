///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a[3],ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a[0]>>a[1]>>a[2];
//    sort(a,a+3,greater<int>());
    int t=a[0]+a[1]+a[2];
    int mid=t/3;
//    cout<<abs(mid-a[0]+mid-a[1]);
        sort(a,a+n);
    if(t%3==0)
    {
        while(a[0]<mid)
        {
            ans++;
            a[0]++;
            a[1]--;
        }
        while(a[1]<mid){
            ans++;
            a[1]++;
            a[2]--;
        }
    }
    else if(t%3==1)
    {

    }
}
