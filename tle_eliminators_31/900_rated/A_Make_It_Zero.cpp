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

    vector<pii> ans;
    if (n & 1) ans = {{1, n}, {1, n - 1}, {n - 1, n}, {n - 1, n}};
    else ans = {{1, n}, {1, n}};

    cout << ans.size() << endl;
    for (auto &i : ans)
    {
        cout << i.first << " " << i.second << endl;
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
