///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
map<char,int> dem;
void appear()
{
    vector<pair<char,int>> a;
    for(auto i:dem)
        a.push_back(make_pair(i.first,i.second));
    sort(a.begin(),a.end());
    for(auto i:a)
        cout<<i.first<<" "<<i.second<<"\n";
}
kien()
{
    if(fopen("Cau4a.inp","r"))
    {
        freopen("Cau4a.inp","r",stdin);
        freopen("Cau4a.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(int i=0;i<s.size();i++)
        dem[s[i]]++;
    cout<<dem.size()<<"\n";
    appear();
}