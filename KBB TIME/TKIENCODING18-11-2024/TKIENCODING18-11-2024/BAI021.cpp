///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000];
kien maxx = -1,minn, vtr;

bool ngto(int n) 
{
    if (n <= 1) 
        return false;
    for (int i = 2; i <= sqrt(n); ++i) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int tongcs(int n) 
{
    int sum = 0;
    while (n > 0) 
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() 
{
    cin >> n;  
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];  
    }
    for (int n : a) 
    {
        if (ngto(n) && n > maxx) 
        {
            maxx = n;
        }
    }
    if (maxx != -1) 
    {
        cout << tongcs(maxx) << endl;
    } 
    else 
    {
        cout << 0 << endl;  
    }
}
