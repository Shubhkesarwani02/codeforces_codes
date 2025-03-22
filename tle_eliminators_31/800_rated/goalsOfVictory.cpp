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
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> nums[i];
        sum += nums[i];
    }
    cout << -(sum) << endl;
    return;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
}