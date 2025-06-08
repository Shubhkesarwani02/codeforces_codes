#include <bits/stdc++.h>
#define int long long
using namespace std;

void helper()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> first(26, -1);
    for (int i = 0; i < n; ++i)
    {
        int idx = s[i] - 'a';
        if (first[idx] == -1)
            first[idx] = i;
    }

    int result = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (first[i] != -1)
            result += n - first[i];
    }

    cout << result << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        helper();

    return 0;
}
