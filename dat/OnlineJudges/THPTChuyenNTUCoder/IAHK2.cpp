#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1005][150],ans;
string s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int j=0;j<s.size();j++)
            a[i][s[j]]++;
    }
//    for(int i=97;i<=122;i++)
//        cout<<a[0][i]<<" ";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int demle=0,dem=0;
            for(int o=97;o<=122;o++){
                if((a[i][o]+a[j][o])==1)
                    dem++;
                else if((a[i][o]+a[j][o])%2==1)
                    demle++;
            }
            if(dem==0&&demle==1)
                ans++;
            else if(dem<=1&&demle==0)
                ans++;
        }
    }
    cout<<ans;

}
