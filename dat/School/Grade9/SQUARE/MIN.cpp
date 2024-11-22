///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long
#define kien main
#define mod 1000000007
using namespace std;
int k;
string s;
bool pos[5005];
void removed()
{
    for(char i='0';i<='9';i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(k==0) return;
            if(s[j]==i)
            {
                pos[j]=1;
                k--;
            }
        }
    }

}
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
    cin>>k>>s;
    removed();
    for(int i=0;i<s.size();i++)
        if(pos[i]==1)
            cout<<s[i];
}