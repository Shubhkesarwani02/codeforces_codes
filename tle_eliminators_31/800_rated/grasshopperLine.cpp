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
    int x, k;
    cin >> x >> k;

    vi temp;
    for (int i = x; i >= 1; i++)
    {
        if (i % k != 0)
        {
            temp.pb(i);
            if (x - i != 0)
                temp.pb(x - i);
            break;
        }
    }
    cout << temp.size() << endl;
    output(temp);
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