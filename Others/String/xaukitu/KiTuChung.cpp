///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string x,y;
int dem[260];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>x>>y;
    for(int i=0;i<x.size();i++)
        dem[x[i]]++;
    sort(y.begin(),y.end());
    for(int i=0;i<y.size();i++)
    {
        if(dem[y[i]]>0)
        {
            cout<<y[i]<<"\n";
            while(y[i]==y[i+1])
                i++;
        }
    }
}