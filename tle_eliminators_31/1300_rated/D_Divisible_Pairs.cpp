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
    int n, x, y;
    cin >> n >> x >> y;

    vi nums(n);
    input(nums);

    int cnt = 0;
    map<int, int> mpp;
    for (auto num : nums)
    {
        /// deduce the eqn into other form and match the keys for counting
        int ax = num % x;
        int ay = num % y;

        int rax = (x - num % x) % x;
        int ray = num % y;

        int req_key = rax * y + ray;
        cnt += mpp[req_key];

        // for the unique keys in the map
        int curr_key = ax * y + ay;
        mpp[curr_key]++;
    }
    cout << cnt << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
