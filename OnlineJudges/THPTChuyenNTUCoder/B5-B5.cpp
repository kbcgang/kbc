#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[105],ans;
int demuoc(int n)
{
    int s=0;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0)
        {
            s+=2;
            if(i*i==n)
                s--;
        }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if((demuoc(a[i])+demuoc(a[j]))%7==0)
                ans++;
    cout<<ans;
}