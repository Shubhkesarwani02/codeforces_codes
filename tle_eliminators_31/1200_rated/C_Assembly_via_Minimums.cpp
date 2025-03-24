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
    int m = n * (n - 1) / 2, b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(b, b + m);
    for (int i = 0; i < m; i += --n)
        cout << b[i] << ' ';
    cout << "1000000000\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}