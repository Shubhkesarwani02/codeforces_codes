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
    int x;
    cin >> x;

    string temp = to_string(x);
    int mini = INT_MAX;
    for (auto ch : temp)
    {
        if (ch - '0' < mini)
            mini = ch - '0';
    }
    cout << mini << endl;
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
