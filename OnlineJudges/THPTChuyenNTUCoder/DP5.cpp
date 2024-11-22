///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
    int a[1000005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[x%n]++;
    }
//    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]<1){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
