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
    vector<vector<int>> cards(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> cards[i][j];
        }
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int total = 0;
    for (int j = 0; j < m; j++)
    {
        vector<int> col;
        col.reserve(n);
        for (int i = 0; i < n; i++)
        {
            col.push_back(cards[i][j]);
        }
        sort(col.begin(), col.end());
        for (int i = 0; i < n; i++)
        {
            total += col[i] * (2LL * i - n + 1);
        }
    }
    cout << total << endl;
}
// go column wise and observe how many times a numebr is added or subtracted...
//  num time added = i-1 and sub = n-1 i;
// ie total = 2i-n+1, for i=0 to n-1, simply find summation of col[i] * (2LL * i - n + 1);

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}