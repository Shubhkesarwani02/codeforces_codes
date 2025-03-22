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

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (y > x + 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if ((x % 9 + 1) % 9 == y % 9)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
    }
}