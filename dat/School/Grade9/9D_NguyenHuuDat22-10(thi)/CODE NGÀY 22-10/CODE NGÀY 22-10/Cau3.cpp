#include<bits/stdc++.h>
using namespace std;
int n, k, a[500005], st[2000005];
string s;
void update(int id, int L, int R, int pos, int val) {
   if(pos < L || R < pos)
      return;
   if(L == R) {
      st[id] = val;
      return;
   }
   int mid = (L + R) / 2;
   update(2 * id, L, mid, pos, val);
   update(2 * id + 1, mid + 1, R, pos, val);
   st[id] = max(st[2 * id], st[2 * id + 1]);
}
int get(int id, int L, int R, int u, int v) {
   if(u <= L && R <= v)
      return st[id];
   if(v < L || R < u)
      return -10;
   int mid = (L + R) / 2;
   int x = get(2 * id, L, mid, u, v);
   int y = get(2 * id + 1, mid + 1, R, u, v);
   return max(x, y);
}
int main() {
//   freopen("MAXK.INP", "r", stdin);
//   freopen("MAXK.OUT","w",stdout);
   cin >> n >> k;
   cin >> s;
   for(int i = 0; i < s.size(); i++) {
      a[i + 1] = s[i] - '0';
      update(1, 1, n, i+1, a[i+1]);
   }
   int d = 1;
   for(int i = 1; i <= k; i++) {
      int maxx = get(1, 1, n, d, n - k + i);
      while(a[d] < maxx)
         d++;
      cout << a[d++];
   }
}
