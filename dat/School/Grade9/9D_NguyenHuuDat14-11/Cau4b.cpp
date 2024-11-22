///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
string s;
void password(string s)
{
    bool number=0,character=0,special=0,CHARACTER=0;
    if(s.size()<8)
        cout<<"No\n";
    else
    {
        for(int i=0;i<s.size();i++)
            if(s[i]>='0'&&s[i]<='9')
                number=1;
            else if(s[i]>='a'&&s[i]<='z')
                character=1;
            else if(s[i]>='A'&&s[i]<='Z')
                CHARACTER=1;
            else special=1;
        if(number==1&&character==1&&special==1&&CHARACTER==1)
            cout<<"Yes\n";
        else cout<<"No\n";
    }
}
kien()
{
    if(fopen("Cau4b.inp","r"))
    {
        freopen("Cau4b.inp","r",stdin);
        freopen("Cau4b.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>s;
        password(s);
    }
}