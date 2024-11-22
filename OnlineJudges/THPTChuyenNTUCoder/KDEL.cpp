///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string s;
int k;
vector<char> a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s>>k;
    for(int i=0;i<s.size();i++)
    {
        if(k==0) break;
        if(s[i]>s[i+1]){
            a.push_back(s[i]);
            k--;
        }
    }
    for(auto i:a)
        cout<<i;
}
