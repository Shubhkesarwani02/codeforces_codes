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

    int vac = 0;
    int maxvac = 0; // consecutive
    int totalvac = 0;
    for (auto ch : s)
    {
        if (ch == '.')
        { // vacant
            totalvac++;
            vac++;
            maxvac = max(maxvac, vac);
        }
        else
            vac = 0;
    }
    if (maxvac >= 3)
    {
        cout << 2 << endl;
        return;
    }
    else
    {
        cout << totalvac << endl;
        return;
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