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

std::vector<int> filterArray(const std::vector<int> &nums)
{
    if (nums.empty())
    {
        return {};
    }

    std::vector<int> result;
    result.push_back(nums[0]);

    for (size_t i = 1; i < nums.size() - 1; ++i)
    {
        if (nums[i] == result.back())
        {
            continue;
        }

        if (!((nums[i - 1] < nums[i] && nums[i] < nums[i + 1]) ||
              (nums[i - 1] > nums[i] && nums[i] > nums[i + 1])))
        {
            result.push_back(nums[i]);
        }
    }

    if (nums.size() > 1 && nums.back() != result.back())
    {
        result.push_back(nums.back());
    }

    // New logic to handle strictly increasing/decreasing sequences
    std::vector<int> finalResult;
    finalResult.push_back(result[0]);

    for (size_t i = 1; i < result.size() - 1; ++i)
    {
        if (!((result[i - 1] < result[i] && result[i] < result[i + 1]) || (result[i - 1] > result[i] && result[i] > result[i + 1])))
        {
            finalResult.push_back(result[i]);
        }
    }
    if (result.size() > 1 && result.back() != finalResult.back())
    {
        finalResult.push_back(result.back());
    }

    return finalResult;
}
int solve(vi nums, int n)
{
    int cont = 0;
    rep(i, 0, n - 2)
    {
        cont += abs(nums[i] - nums[i + 1]);
    }
    return cont;
}

void helper()
{
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    int cont = solve(nums, n);
    if (n == 1 || cont == 0)
    {
        cout << 1 << endl;
        return;
    }
    vi filtered = filterArray(nums);
    int len = filtered.size();
    cout << len << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
