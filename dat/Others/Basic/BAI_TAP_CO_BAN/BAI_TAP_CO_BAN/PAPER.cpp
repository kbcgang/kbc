///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int t,n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n);
        int dem[3]={};
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++)
            dem[a[i]%3]++;
//        cout<<dem[0]<<" ";
        cout<<dem[0]/2+min(dem[1],dem[2])<<"\n";
//        a.clear();
    }
}
