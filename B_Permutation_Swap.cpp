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

void helper()
{
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    int g = 0;
    rep(i, 0, n - 1)
    {
        if (nums[i] != i + 1)
        {
            int diff = abs((nums[i] - 1) - i);
            g = __gcd(g, diff);
        }
    }
    cout << g << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
