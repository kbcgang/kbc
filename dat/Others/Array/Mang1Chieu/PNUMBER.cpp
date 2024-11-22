///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,ans;
string a;
bool check(string a)
{
    for(int i=0;i<a.size();i++)
        if(a[i]!='8'&&a[i]!='6')
            return 0;
    return 1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>a;
        ans+=check(a);
    }
    cout<<ans;
}