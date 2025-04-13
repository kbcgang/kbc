///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        char a=s[i];
        if(s[i+1]>='0'&&s[i+1]<='9')
        {
            int Count=0;
            while(s[i+1]>='0'&&s[i+1]<='9')
            {
                Count=Count*10+s[i+1]-48;
                i++;
            }
            while(Count--)
                cout<<a;
        }
        else cout<<a;
    }
}