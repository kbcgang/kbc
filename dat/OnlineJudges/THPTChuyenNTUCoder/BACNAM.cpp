///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
vector<int> bac;
vector<int> nam;
long ansbac=1,ansnam=1; //bac=le, nam=chan
int pos[200001];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        pos[x]=i;
    }
    for(int i=1;i<n-2;i+=2)
        if(pos[i]>pos[i+2])
            ansbac++;
    for(int i=2;i<n-1;i+=2)
        if(pos[i]>pos[i+2])
            ansnam++;
    cout<<ansbac<<"\n"<<ansnam;
}