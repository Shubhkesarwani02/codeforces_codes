#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define input(v)      \
    for (auto &i : v) \
    cin >> i
#define output(v)     \
    for (auto &i : v) \
    cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()
#define rep(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

int maxLenSubarrayWithAdjDiffK(vector<int> arr, int k, int n)
{
    int maxLen = 1;
    int currLen = 1;

    for (int i = 1; i < n; ++i)
    {
        if (abs(arr[i] - arr[i - 1]) <= k)
        {
            currLen++;
            maxLen = max(maxLen, currLen);
        }
        else
        {
            currLen = 1;
        }
    }

    return maxLen;
}
void helper()
{
    int n, k;
    cin >> n >> k;
    vi nums(n);
    input(nums);

    sort(all(nums));

    int len = maxLenSubarrayWithAdjDiffK(nums, k, n);
    cout << (n - len) << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
