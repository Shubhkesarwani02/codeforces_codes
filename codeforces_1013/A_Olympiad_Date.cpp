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
    vi digits(n);
    for (auto &d : digits)
        cin >> d;
    vi freq(10, 0);
    int ans = 0;
    rep(i, 0, n - 1)
    {
        freq[digits[i]]++;
        if (freq[0] >= 3 && freq[1] >= 1 && freq[2] >= 2 && freq[3] >= 1 && freq[5] >= 1)
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
