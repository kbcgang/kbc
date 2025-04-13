///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int t;
string s;
bool a[30];
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>s;
        int d=0,ans=0;
        for(auto i:s)
        {
            if(!a[i-97]){d++;a[i-97]=1;}
            else if(a[i-97]){
                ans+=d-1;
                d=0;
                for(int j=0;j<26;j++)a[j]=0;
            }
        }
        ans+=d;
        cout<<ans<<"\n";
        for(int j=0;j<26;j++)a[j]=0;
    }
}