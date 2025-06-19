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
using namespace std;

bool isPowerOfTwo(int n)
{
    return (n & (n - 1)) == 0;
}

void helper()
{
    int x;
    cin >> x;
    if (isPowerOfTwo(x) || isPowerOfTwo(x + 1))
    {
        cout << -1 << "\n";
        return;
    }

    int m = 63 - __builtin_clzll(x);
    int p = 1LL << m;
    int r = x - p;

    int bit_missing = -1, bit_present = -1;
    for (int j = 0; j < m; j++)
    {
        if (((r >> j) & 1LL) == 0)
        {
            bit_missing = j;
            break;
        }
    }
    for (int j = 0; j < m; j++)
    {
        if (((r >> j) & 1LL) == 1)
        {
            bit_present = j;
            break;
        }
    }
    int y = (1LL << bit_missing) + (1LL << bit_present);
    cout << y << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
