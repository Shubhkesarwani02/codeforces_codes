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
    string s;
    cin >> s;

    vector<bool> removed(n + 1, false);
    int cost = 0;

    rep(k, 1, n)
    {
        for (int j = k; j <= n; j += k)
        {
            if (removed[j])
                continue; // already removed
            if (s[j - 1] == '0')
            { // has to be removed
                removed[j] = true;
                cost += k;
            }
            else
                break; // not belong to T
        }
    }
    cout << cost << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
