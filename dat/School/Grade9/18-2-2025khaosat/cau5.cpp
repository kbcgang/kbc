///Made by Nguyễn Hữu Đạt
/*

*/
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,m;
int pack;
int t1,t2;
struct marble{
    int g;
    bool cl;
};
marble a[1000005];
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
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i].g;
    for(int i=0;i<n;i++)cin>>a[i].cl;
    for(int i=0;i<n;i++)
        if(!a[i].cl){
            if(t1+a[i].g>m){pack++;t1=a[i].g;}
            else t1+=a[i].g;
        }
        else{
            if(t2+a[i].g>m){pack++;t2=a[i].g;}
            else t2+=a[i].g;
        }
    pack+=2;
    cout<<pack;
}