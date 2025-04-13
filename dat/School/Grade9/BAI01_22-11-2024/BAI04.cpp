#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[8505],ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int k=n-1;k>=2;k--)
    {
        int i=0,j=k-1;
        while(j>i)
        {
            if(a[j]+a[i]>a[k])
            {
                ans+=j-i;
                j--;
            }
            else i++;
        }
    }
    cout<<ans;
}
