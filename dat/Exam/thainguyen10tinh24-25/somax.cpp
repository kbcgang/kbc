///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<climits>
#include<array>
#include<vector>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
int a[100005];
vector<int> d;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--)
    {
        while(d.empty()==0&&d.back()<=a[i])
            d.pop_back();
        if(d.empty()){
            d.push_back(a[i]);
            a[i]=-1;
        }
        else 
        {
            d.push_back(a[i]);
            a[i]=d[d.size()-2];
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
}