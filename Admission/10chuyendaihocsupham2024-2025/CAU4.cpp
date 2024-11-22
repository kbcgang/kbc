/// Suck Kiên's brain is very good to your brain
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t, a;
int checky(string x)
{
    for(int i=0;i<x.size()-1;i++)
        if(x[i]>=x[i+1])
            return i;
    return -1;
}
void check(string x)
{
    int ans=checky(x);
    while(ans!=-1){
        x[ans]--;
        char m='9';
        for(int i=x.size()-1;i>ans;i--)
        {
            x[i]=m;
            m--;
        }
        ans=checky(x);
    }
    while(x[0]<'1')
        x.erase(0,1);
    cout<<x<<"\n";
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a;
        string x = to_string(a);
        char add = '9';
        if (x.size() == 1)
            cout << x << "\n";
        else
            check(x);
    }
}