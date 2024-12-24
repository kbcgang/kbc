///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n;
vector<int> a(n);
int daycon(int n, const vector<int>& a) 
{
    int maxx = 1;   
    int dp = 1;

    for (int i = 1; i < n; i++) 
    {
        if (a[i] >= a[i - 1]) 
        {
            dp++; 
        } 
        else 
        {
            maxx = max(maxx, dp);
            dp = 1; 
        }
    }

    maxx = max(maxx, dp);

    return maxx;
}

int main() 
{
    cin >> n; 
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i]; 
    }
    cout << daycon(n, a) << endl; 
}
