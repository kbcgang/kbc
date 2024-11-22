///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
vector<long long> a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        a.push_back(x);
    }
    long long m=a[1]-a[0];
    for(int i=1;i<n-1;i++)
    {
        if(a[i]+m!=a[i+1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
