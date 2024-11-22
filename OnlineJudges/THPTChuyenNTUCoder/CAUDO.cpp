#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    int g=0;
    while(g<=n)
    {
        if(g*2+(n-g)*4==m)
        {
            cout<<g<<" "<<n-g;
            return 0;
        }
        g++;
    }
    cout<< " Hi, Linda xin chao ca nha";
}
