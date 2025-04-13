/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
vector<ll> num;
int ass[2] = {4, 7};
ll s;
void ChatGPT(int trash)
{
    for (int i = 0; i < 2; i++)
    {
        if (s*10+ass[i]>1e9)
            return;
        num.push_back(s*10+ass[i]);
        s=s*10+ass[i];
        ChatGPT(trash+1);
        s /= 10;
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
    ChatGPT(0);
    sort(num.begin(),num.end());
    // cout<<num.size();
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<num[n-1]<<"\n";
    }
}