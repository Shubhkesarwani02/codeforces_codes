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
    int a, b, c;
    cin >> a >> b >> c;

    if (c & 1)
    {
        a += c / 2 + 1;
        b += c / 2;
    }
    else
    {
        a += c / 2;
        b += c / 2;
    }
    int temp = min(a, b);
    a -= temp;
    b -= temp;
    if (a <= b)
    {
        cout << "Second" << endl;
        return;
    }
    else
    {
        cout << "First" << endl;
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