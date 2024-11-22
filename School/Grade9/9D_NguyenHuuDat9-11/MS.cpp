///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
map<string,int>dem;
int ans;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("MS.inp","r"))
    {
        freopen("MS.inp","r",stdin);
        freopen("MS.out","w",stdout);
    }
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='1'&&s[i]<='9')
        {
            string m;
            while(s[i]>='0'&&s[i]<='9'&&i<s.size())
            {
                m.push_back(s[i]);
                i++;
            }
            dem[m]++;
        }
    }
    cout<<dem.size();
}