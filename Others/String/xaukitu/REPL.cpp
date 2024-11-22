#include<bits/stdc++.h>
#define int long long
using namespace std;
string s1,s2,s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    if(fopen(".inp","r")){
//        freopen(".inp","r",stdin);
//        freopen(".out","w",stdout);
//    }
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s);
    while(s.find(s1)<s.size()){
        s.replace(s.find(s1),s1.size(),s2);
    }
    cout<<s;
}
