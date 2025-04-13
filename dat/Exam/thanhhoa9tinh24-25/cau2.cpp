///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string s;
vector<int> a;
int k,pos;
void getFirst()
{
    int num=0;
    for(int i=0;i<=a.size()-k;i++)
        if(a[i]>num)
        {
            pos=i;
            num=a[i];
        }
    cout<<num;
}
void getDigit()
{
    for(int i=k-1;i>=1;i--)
    {
        int num=-1;
        for(int j=pos+1;j<=a.size()-i;j++)
            if(a[j]>num)
            {
                pos=j;
                num=a[j];
            }
        cout<<num;
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
    cin>>s>>k;
    for(int i=0;i<s.size();i++)
        if(s[i]>='0'&&s[i]<='9')
            a.push_back(s[i]-48);
    getFirst();
    getDigit();
}