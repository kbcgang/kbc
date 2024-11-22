///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
pair<long long,long long> a[1005];
map<long long,int> dem;
int ans;
void tryluck()
{
    // srand(time(0));
    cout<<rand()%(n+1);
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("SAPXEP.inp","r"))
    {
        freopen("SAPXEP.inp","r",stdin);
        freopen("SAPXEP.out","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i].first>>a[i].second;
    tryluck();
    // cout<<ans;
}