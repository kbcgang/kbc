#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,k,a[100005],ans=INT_MIN;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>=2;i--)
    {
        int d=0,c=i-1,tam=0;
        int s=k-a[i];
        while(d<c)
        {
            if(a[d]+a[c]==s){
                cout<<k;
                return 0;
            }
            if(a[d]+a[c]>s)
                c--;
            else if(a[d]+a[c]<s)
            {
                tam=max(tam,a[d]+a[c]);
                d++;
            }
        }
        ans=max(ans,tam+a[i]);
    }
    printf("%d",ans);
}