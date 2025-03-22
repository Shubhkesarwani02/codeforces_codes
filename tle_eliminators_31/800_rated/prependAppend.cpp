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
    string s;
    cin >> s;

    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (s[i] == s[j])
            break;
        else
        {
            i++;
            j--;
        }
    }
    if (i == j)
    {
        cout << 1 << endl;
        return;
    }
    if (j - i < 0)
    {
        cout << 0 << endl;
        return;
    }
    cout << j - i + 1 << endl;
    return;
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