///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;

int N = 5;
int K = 10;
vector<int> arr = {1, 2, 3, 4, 5};
int l = 0;
int sum = 0;
int maxx = 0;

int sub() 
{
    for (int i = 0; i < N; i++) 
    {
        sum += arr[i];
        while (sum > K) 
        {
            sum -= arr[l];
            l++;
        }
        maxx = max(maxx, i - l + 1);
    }
    return maxx > 0 ? maxx : -1;
}

int main() 
{
    if(fopen("BAI4.INP","r"))
    {
       freopen("BAI4.INP","r",stdin);
       freopen("BAI4.OUT","w",stdout);
    }
    cout << sub() << endl;  
    return 0;
}
