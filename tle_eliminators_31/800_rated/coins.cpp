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
    int n, k;
    cin >> n >> k;

    if (n % 2 == 0)
    { // take coins of value 2
        cout << "YES" << endl;
        return;
    }
    else
    { // n is odd
        if (k % 2 == 0)
        { // 2 and k is even, not possible
            cout << "NO" << endl;
            return;
        }
        else
        { // k is odd
            if (n < k && n < 2)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                cout << "YES" << endl;
                return;
            }
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