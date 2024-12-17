#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {

        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)  
            cin>>a[i];
        int kt=0;
        while (!a.empty())
        {
            int maxx = a[0];
            int maxi = 0;
            for (int i = 1; i < a.size(); i++)
            {
                if (a[i] > maxx)
                {
                    maxx = a[i];
                    maxi = i;
                }
            }

            a.erase(a.begin() + maxi, a.end());

            kt++;
        }
        if(kt%2==1)
          cout<<"BOB\n";
        else 
          cout<<"ANDY\n";
    }
}