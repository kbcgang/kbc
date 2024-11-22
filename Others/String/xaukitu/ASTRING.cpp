#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    if(fopen(".inp","r")){
//        freopen(".inp","r",stdin);
//        freopen(".out","w",stdout);
//    }
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s;
}
