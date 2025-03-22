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

    vi a;
    vi b;
    sort(all((nums)));

    a.pb(nums[0]);
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == a.back())
        {
            a.pb(nums[i]);
        }
        else
        {
            b.push_back(nums[i]);
        }
    }
    if (b.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    // cout<<"ans: ";
    cout << a.size() << " " << b.size() << endl;
    output(a);
    cout << endl;
    output(b);
    cout << endl;
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