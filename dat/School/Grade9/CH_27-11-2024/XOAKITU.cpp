///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
int k,n;
void checkpalind(int l,int r)
{
    for(int i=l;i<=(l+r)/2;i++)
        if(s[i]!=s[r-(i-l)])
            return;
    for(int i=l;i<=r;i++)
        cout<<s[i];
    exit(0);
}
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
    cin>>n>>k;
    cin>>s;
    int palind=n-k;
    int l=0,r=palind-1;
    while(r<s.size())
    {
        checkpalind(l,r);
        l++;
        r++;
    }
    cout<<"No";
}