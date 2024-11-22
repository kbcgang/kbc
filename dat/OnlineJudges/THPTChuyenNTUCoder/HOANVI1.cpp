///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
short n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    do
    {
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    } while (next_permutation(a,a+n));
    
}