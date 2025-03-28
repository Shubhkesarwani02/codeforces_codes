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

    vi spend(n);
    input(spend);
    vi cap(n);
    input(cap);

    int maxGroup = 0;
    int exp = 0;
    int currCap = 0;
    int group = 0;

    vector<pii> pair;
    rep(i, 0, n - 1) pair.pb({spend[i], cap[i]});
    sort(all(pair));

    for (auto it : pair)
    {
        exp += it.first;
        currCap += it.second;
        group++;

        if (group >= 2 && exp <= currCap)
        {
            maxGroup++;
            exp = 0;
            currCap = 0;
            group = 0;
        }
    }
    cout << maxGroup << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
