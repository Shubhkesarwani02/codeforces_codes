#include <bits/stdc++.h>
using namespace std;
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

void helper()
{
    int n;
    cin >> n;
    vi a(n);
    input(a);

    int sum = 0;
    for (auto num : a)
    {
        sum += num;
    }
    cout << sum - (n - 1) << endl;
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
