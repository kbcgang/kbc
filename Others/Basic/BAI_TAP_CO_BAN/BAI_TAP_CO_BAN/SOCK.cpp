///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
int ans;
vector<int> a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int dem=0;
    for(int i=0;i<n;i++)
    {
        dem++;
        if(a[i]!=a[i+1]){
            ans+=dem/2;
            dem=0;
        }
    }
    cout<<ans;
}
