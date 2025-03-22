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

    if (n % 3 == 0)
    {
        cout << "Second" << endl;
        return;
    }
    else
    {
        if ((n - 1) % 3 == 0 || (n + 1) % 3 == 0)
        {
            cout << "First" << endl;
            return;
        }
        else
        {
            cout << "Second" << endl;
            return;
        }
    }
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