#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[11],s;
string m;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    cin>>m;
    for(int i=0;i<m.size();i++)
        a[m[i]-48]++;
    for(int i=0;i<=n;i++)
    {
        int t=i;
        while(t>0)
        {
            if(a[t%10]>0){
                s++;
                break;
            }
            t/=10;
        }
    }
    cout<<n-s;
}
