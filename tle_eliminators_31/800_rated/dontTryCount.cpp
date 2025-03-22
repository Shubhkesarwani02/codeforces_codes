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
    int n, m;
    cin >> n >> m;
    string x;
    cin >> x;
    string s;
    cin >> s;

    long long cnt = 0;
    string temp = x;

    while (true)
    {
        if (cnt > 5)
            break;
        if (temp.find(s) != string::npos)
        {
            cout << cnt << endl;
            return;
        }
        cnt++;
        temp += temp;
    }
    cout << -1 << endl;
    return;
}

signed main()
{
    // at worst case: n=1, m=25
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
}