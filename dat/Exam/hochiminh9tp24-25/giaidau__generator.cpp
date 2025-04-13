#include <bits/stdc++.h>
#define pii pair<int, int>
#define fi first
#define se second
#define int long long
using namespace std;
int32_t main() {  // nhuthangbk@gmail.com -
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // Let's go! Try to be the best...
    srand(time(NULL));
    int n=2+rand()%20;
    int q=2+rand()%20;
    cout<<n<<' '<<q<<'\n';
    for(int i=1;i<=n;i++)
        cout<<1+rand()%100<<' ';
    for(int i=1;i<=q;i++)
    {
        int u=1+rand()%(n/2);
        int v=u+1+rand()%(n/2);
        cout<<u<<' '<<v<<'\n';
    }
}

