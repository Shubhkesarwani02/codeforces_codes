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
    int n, x;
    cin >> n >> x;
    vi a(n);
    input(a);
    sort(a.begin(), a.end(), greater<int>());
    int cnt = 0, team_size = 0;
    for (int i = 0; i < n; i++)
    {
        team_size++;
        if (team_size * a[i] >= x)
        {
            cnt++;
            team_size = 0;
        }
    }
    cout << cnt << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
