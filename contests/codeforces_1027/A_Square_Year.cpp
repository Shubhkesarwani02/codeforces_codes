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

void helper() {
    string s;
    cin >> s;
    long long N = stoll(s);
    long long k = floor(sqrt((long double)N));
    if ((k + 1) * (k + 1) == N) k++;
    if (k * k == N)
        cout << 0 << " " << k << '\n';
    else
        cout << -1 << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
