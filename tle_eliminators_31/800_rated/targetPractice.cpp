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
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        vector<pair<int, int>> temp;
        string s;
        cin >> s;

        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'X')
                temp.push_back({i, j});
        }
        for (auto it : temp)
        {
            int x = it.first;
            int y = it.second;
            int a = min(x, y);
            int b = min(9 - x, 9 - y);

            ans += min(a, b) + 1;
        }
    }
    cout << ans << endl;
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