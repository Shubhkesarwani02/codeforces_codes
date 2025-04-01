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
    vector<int> inf(m);
    for (int i = 0; i < m; i++)
    {
        cin >> inf[i];
    }
    sort(inf.begin(), inf.end());
    vector<int> gaps;
    for (int i = 1; i < m; i++)
    {
        int gap = inf[i] - inf[i - 1] - 1;
        if (gap > 0)
            gaps.push_back(gap);
    }
    int circular_gap = (n - inf[m - 1]) + (inf[0] - 1);
    if (circular_gap > 0)
        gaps.push_back(circular_gap);
    sort(gaps.begin(), gaps.end(), greater<int>());
    int days = 0, saved = 0;
    for (int gap : gaps)
    {
        gap -= 2 * days;
        if (gap <= 0)
            continue;
        if (gap <= 2)
        {
            saved++;
            days++;
        }
        else
        {
            saved += gap - 1;
            days += 2;
        }
    }
    cout << n - saved << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}