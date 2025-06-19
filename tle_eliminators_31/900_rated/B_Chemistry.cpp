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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<char, int> mpp;
    int odd = 0;
    for (char c : s)
        mpp[c]++;
    for (auto it : mpp)
        if (it.second & 1)
            odd++;

    if (odd - k > 1)
        cout << "NO\n";
    else
        cout << "YES\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
