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

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void helper()
{
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    bool possible = false;
    for (int i = 0; i < n && !possible; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (gcd(nums[i], nums[j]) <= 2)
            {
                possible = true;
                break;
            }
        }
    }
    if (possible)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
}

signed main()
{
    // since if we have the pair with gcd 1 or 2, we can place that pair at the start!!
    // hence they will make other pairs gcd at most 2...
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
}