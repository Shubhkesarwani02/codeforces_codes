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
    int n, m;
    cin >> n >> m;
    vi height(n);
    vi len(m);
    input(height);
    input(len);

    vi req(m, 0);
    vector<int> ptr(m, 0);

    for (int i = 0; i < m; i++)
    {
        for (int j = ptr[i]; j < n; j++)
        {
            if (height[j] <= len[i])
            {
                req[i] += height[j];
                ptr[i] = j + 1;
            }
            else
            {
                break;
            }
        }
    }

    output(req);
    cout << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}