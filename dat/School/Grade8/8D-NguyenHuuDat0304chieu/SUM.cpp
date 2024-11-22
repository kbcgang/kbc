#include<bits/stdc++.h>
#define int long long 
using namespace std;
vector<int> a(5);
main()
{
    if(fopen("SUM.INP","r")){
        freopen("SUM.INP","r",stdin);
        freopen("SUM.OUT","w",stdout);
    }
    for(int i=0;i<5;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int s=0;
    for(int i=0;i<4;i++)
        s+=a[i];
    cout<<s<<" ";
    s=0;
    for(int i=1;i<5;i++)
        s+=a[i];
    cout<<s;
}