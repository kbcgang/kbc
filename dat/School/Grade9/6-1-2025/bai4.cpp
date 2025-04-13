#include <bits/stdc++.h>
using namespace std;
int n,k,a[100001];
int maxSum(int arr[], int n, int k)
{
    if (n < k)
    {
        return -1;
    }
    int res = 0;
    for (int i = 0; i < k; i++) res += arr[i];
    int curr_sum = res;
    for (int i = k; i < n; i++)
        {
            curr_sum += arr[i] - arr[i - k];
            res = max(res, curr_sum);
        }
    return res;
}
int solve(int arr[], int n, int k)
{
    int max_len = 0, l = 0, r = n, m;
    while (l <= r)
        {
             m = (l + r) / 2;
             if (maxSum(arr, n, m) > k) r = m - 1;
             else
             {
                  l = m + 1;
                  max_len = m;
            }
    }
    if(max_len==0) return -1;
    else  return max_len;
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)  cin>>a[i];
    cout << solve(a, n, k);
    return 0;
}