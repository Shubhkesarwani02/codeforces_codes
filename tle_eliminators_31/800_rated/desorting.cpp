#include <bits/stdc++.h>

#define int long long
#define vi vector<int>
#define input(v)      \
    for (auto &i : v) \
    cin >> i
#define output(v)     \
    for (auto &i : v) \
    cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()
#define sum(a) a.begin(), a.end(), 0

using namespace std;

int countSteps(int n)
{
    return n / 2;
}
void helper()
{
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    int gap = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            cout << 0 << endl;
            return;
        }
        gap = min(gap, nums[i] - nums[i - 1]);
    }
    int ans = countSteps(gap) + 1;
    //cout << "ans: ";
    cout << ans << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
}