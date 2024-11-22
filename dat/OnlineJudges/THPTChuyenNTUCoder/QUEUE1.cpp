///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
vector<int> ans;
char a;
int n,x;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a=='E')
        {
            cin>>x;
            ans.push_back(x);
        }
        else
        {
            if(ans.empty()==1) cout<<"-1\n";
            else if(a=='D')
            {
                cout<<ans[0]<<"\n";
                ans.erase(ans.begin());
            }
            else if(a=='G')
                cout<<ans[0]<<"\n";
        }
    }
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
}
