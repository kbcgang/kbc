#include<bits/stdc++.h>
#define int long long
using namespace std;
int q,k;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>q;
    while(q--)
    {
        cin>>k;
        int m=cbrt(k),save=1;
        while(m*m*m-2*m<=k-5)
        {
            if(m*m*m-2*m==k-5)
            {
                cout<<m<<"\n";
                save=0;
                break;
            }
            m++;
        }
        if(save) cout<<-1<<"\n";
    }
}
