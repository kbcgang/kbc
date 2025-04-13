///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<string>
#include<array>
#include<queue>
#include<algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string abc;
ll k,d[30],s[30];
void slow()
{
    priority_queue<ll>q;
    for(int i=1;i<27;i++)
        q.push(d[i]);
    while(k--&&q.top()>0)
    {
        ll x=q.top();
        q.pop();
        x--;
        q.push(x);
    }
    ll res=0;
    while(q.size()>0)
    {
        ll x=q.top();
        res+=x*x;
        q.pop();
    }
    cout<<res;
}
void fast()
{
    int p=0;
    sort(d+1,d+30,greater<int>());
    for(int i=1;i<30;i++)
        s[i]=s[i-1]+d[i];
    if(s[29]<=k)
        cout<<0;
    else{
        int c=1;
        for(int i=1;i<30;i++)
            if(s[i]-i*d[i]<=k) //i*d[i] là giảm dãy xuống d[i]
                c=i;
        k=k-(s[c]-c*d[c]); // chi phí thừa 1
        ll t=k/c;   // phân bố cho chi phí thừa
        ll r=k%c;   // chi phí thừa 2
        ll res=(c-r)*(d[c]-t)*(d[c]-t) // d[1...c-1]=d[c]
                + r*(d[c]-t-1)*(d[c]-t-1); // -t do thừa -t-1 nếu thừa thêm
        for(int i=c+1;i<30;i++)
            res+=(d[i]*d[i]); //các số không được giảm
        cout<<res;
    }
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    // cin.tie(0)->sync_with_stdio(0);
    cin>>abc>>k;
    for(auto &i:abc)
    {
        if(i>='A'&&i<='Z')
            i=char(i+32);
        d[i-96]++;
    }
   slow();
}