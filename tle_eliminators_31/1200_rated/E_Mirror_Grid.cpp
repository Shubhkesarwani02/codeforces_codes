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
    vector<vector<char>> nums(n, vector<char>(n));
    
    rep(i, 0, n - 1)
    {
        rep(j, 0, n - 1)
        {
            cin >> nums[i][j];
        }
    }

    int ops = 0;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < (n + 1) / 2; j++)
        {
            int a = nums[i][j] - '0';
            int b = nums[j][n - 1 - i] - '0';
            int c = nums[n - 1 - i][n - 1 - j] - '0';
            int d = nums[n - 1 - j][i] - '0';

            int ones = a + b + c + d;
            int zeros = 4 - ones;

            ops += min(ones, zeros);
        }
    }
    cout << ops << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
