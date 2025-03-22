#include <bits/stdc++.h>

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
#define sum(a) a.begin(), a.end(), 0

using namespace std;

void helper()
{
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    int s = accumulate(sum(nums));
    if (s & 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return;
}

signed main()
{
    // sum of entire array must be even!
    // if the sum is even,
    // to make parity same, we can choose any elemnt!
    // let s=24, if we pick 1, s=23; if we pcik 2, s=22, ...
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
}