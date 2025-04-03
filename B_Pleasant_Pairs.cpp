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

// ai * aj = i + j <= n
void helper()
{
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    int cnt = 0;

    rep(i, 0, n - 1)
    {
        rep(j, i + 1, n - 1)
        {
            if ((nums[i] * nums[j] <= 2 * n))
            {
                if (nums[i] * nums[j] == (i + 1) + (j + 1))
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
