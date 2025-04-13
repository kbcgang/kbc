///Made by Nguyễn Hữu Đạt
#include <iostream>
#include<ios>
#include<array>
#include<deque>
#define ll long long
using namespace std;
struct flowers{
    int v,h;
};
int n,ans=2e9;
deque<int> dq;
flowers a[1000005];
ll m,s;
void subdeque()
{
    int l=0;
    for(int r=0;r<n;r++)
    { 
        s+=a[r].v;
        if(dq.empty()==0)
            while(dq.empty()==0&&a[dq.back()].h<a[r].h)
                dq.pop_back();
        dq.push_back(r);
        while(s>=m&&l<=r)
        {
            ans=min(ans,a[dq.front()].h);
            if(l==dq.front())
                dq.pop_front();
            s-=a[l++].v;
        }
    }
    cout<<ans%2000000000;
}
main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i].v>>a[i].h;
    subdeque();
}