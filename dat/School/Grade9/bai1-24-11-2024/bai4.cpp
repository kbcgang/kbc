///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int t;
map<char,int> appear;

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
        string s;
        cin>>s;
        // char ans;
        for(auto i:s)
            appear[i]++;
        for(auto i:s)
            if(appear[i]==1)
            {
                cout<<i;
                break;
            }
        appear.clear();
    }
}