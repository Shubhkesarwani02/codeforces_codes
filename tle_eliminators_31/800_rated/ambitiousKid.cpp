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

    bool zero = false;
    int mini = INT_MAX;
    for (auto it : nums)
    {
        if (it == 0 && !zero)
        {
            zero = true;
        }
        mini = min(abs(it), mini);
    }
    if (zero)
    {
        cout << 0 << endl;
        return;
    }
    cout << mini << endl;
    return;
}

signed main()
{
    helper();
}