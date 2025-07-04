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
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    int ans = 0;
    while (true)
    {
        bool can_a = (a <= k);
        bool can_b = (b <= k);

        if (!can_a && !can_b)
            break;

        if (can_a && can_b)
        {
            if (x <= y)
            {
                ans++;
                k -= x;
            }
            else
            {
                ans++;
                k -= y;
            }
        }
        else if (can_a)
        {
            ans++;
            k -= x;
        }
        else if (can_b)
        {
            ans++;
            k -= y;
        }
    }

    cout << ans << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
