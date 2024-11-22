///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[1000005],m;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
        int d=0,c=i;
        int t=s;
        while(c<n&&d<n&&t>=m)
        {
            t-=a[d];
            c++;
            t+=a[c];
            d++;
        }
        if(c==n)
        {
            cout<<c-d+1;
            return 0;
        }
    }
}