///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,x,y;
vector<pair<int,int>> pos;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        pos.push_back(make_pair(x,y));
    }
    sort(pos.begin(),pos.end());
    for(int i=0; i<n; i++)
        cout<<pos[i].first<<" "<<pos[i].second<<"\n";
}
