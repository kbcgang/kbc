#include<bits/stdc++.h>
#define int long long

using namespace std;
int a,b,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    int basea=a,baseb=b;
    while(a%3!=0)
    {
        a++;
    }
    if(a>b)
    {
        cout<<baseb-basea+1;
        return 0;
    }
    while(b%3!=0)
    {
        b--;
    }
    ans=b/3-a/3+1;
    cout<<baseb-basea-ans+1;
}
