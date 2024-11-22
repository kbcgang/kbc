#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n;
int f[50],i=2;
map<int,int> dem;
void check()
{
    f[0]=0;
    f[1]=1;
    dem[0]=1;
    while(f[i-1]<=pow(10,9))
    {
        f[i]=f[i-2]+f[i-1];
        dem[f[i-1]]=1;
        i++;
    }
    i--;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    check();
    cin>>t;
    while(t--)
    {
        cin>>n;
        int save=1;
        if(dem[n]==1)
        {
            cout<<"YES\n";
            save=0;
        }
        else
        {
            int j=3;
            while(f[j]<=sqrt(n))
            {
                if(n%f[j]==0)
                    if(dem[n/f[j]])
                    {
                        cout<<"YES\n";
                        save=0;
                        break;
                    }
                j++;
            }
        }
        if(save) cout<<"NO\n";
    }
}
