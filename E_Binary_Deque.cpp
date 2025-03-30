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

int longestSubarrayWithSum(vector<int> &nums, int s)
{
    int n = nums.size();
    int left = 0, right = 0, sum = 0, maxLength = -1;

    while (right < n)
    {
        sum += nums[right];

        while (sum > s && left <= right)
        {
            sum -= nums[left];
            left++;
        }

        if (sum == s)
        {
            maxLength = max(maxLength, right - left + 1);
        }
        right++;
    }

    return maxLength;
}
void helper()
{
    int n, s;
    cin >> n >> s;
    vi nums(n);
    input(nums);

    int tot = accumulate(nums.begin(), nums.end(), 0);
    if (tot < s)
    {
        cout << -1 << endl;
    }
    else if (tot == s)
    {
        cout << 0 << endl;
    }
    else
    {
        int len = longestSubarrayWithSum(nums, s);
        cout << n - len << endl;
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
