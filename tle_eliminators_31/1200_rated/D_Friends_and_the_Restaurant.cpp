#include <bits/stdc++.h>
#define ll long long
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
    int n;
    cin >> n;
    vector<ll> x(n), y(n);
    vector<pair<ll, int>> dif(n);

    for (auto &i : x)
        cin >> i;
    for (auto &i : y)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        dif[i].first = y[i] - x[i];
        dif[i].second = i;
    }
    sort(dif.begin(), dif.end());
    reverse(dif.begin(), dif.end());

    int j = n - 1, cnt = 0;

    for (int i = 0; i < n; i++)
    {
        while (j > i && dif[i].first + dif[j].first < 0)
            j--; // find the j where condition meets
        if (j <= i)
            break;
        cnt++;
        j--;
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
