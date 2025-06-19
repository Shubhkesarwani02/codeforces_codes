#include <bits/stdc++.h>
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
typedef long long ll;

void helper()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    input(a);
    input(b);
    vi posA(n + 1), posB(n + 1);
    for (int i = 0; i < n; i++)
    {
        posA[a[i]] = i + 1;
        posB[b[i]] = i + 1;
    }
    vi revA(n + 1);
    for (int i = 1; i <= n; i++)
    {
        revA[posA[i]] = i;
    }
    vector<bool> used(n + 1, false);
    vi L, R;
    for (int v = 1; v <= n; v++)
    {
        if (posA[v] == posB[v])
            continue;
        if (used[v])
            continue;
        int i = posA[v], j = posB[v];
        int cand = revA[j];
        if (posB[cand] != i)
        {
            cout << -1 << endl;
            return;
        }
        used[v] = used[cand] = true;
        L.push_back(i);
        R.push_back(j);
    }
    int selfCount = 0;
    int selfIndex = -1;
    for (int v = 1; v <= n; v++)
    {
        if (posA[v] == posB[v])
        {
            selfCount++;
            selfIndex = posA[v];
        }
    }
    if (n % 2 == 0)
    {
        if (selfCount)
        {
            cout << -1 << endl;
            return;
        }
        if (L.size() * 2 != (size_t)n)
        {
            cout << -1 << endl;
            return;
        }
    }
    else
    {
        if (selfCount != 1)
        {
            cout << -1 << endl;
            return;
        }
        if (L.size() * 2 + 1 != (size_t)n)
        {
            cout << -1 << endl;
            return;
        }
    }
    int m = L.size();
    vi target(n);
    for (int i = 0; i < m; i++)
    {
        target[i] = L[i];
    }
    if (n % 2 == 1)
    {
        target[m] = selfIndex;
        for (int i = 0; i < m; i++)
        {
            target[m + 1 + i] = R[m - 1 - i];
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            target[m + i] = R[m - 1 - i];
        }
    }
    vi curr(n);
    for (int i = 0; i < n; i++)
        curr[i] = i + 1;
    vector<pair<int, int>> ops;
    for (int i = 0; i < n; i++)
    {
        if (curr[i] == target[i])
            continue;
        int j = i + 1;
        while (j < n && curr[j] != target[i])
            j++;
        if (j == n)
            continue;
        swap(curr[i], curr[j]);
        ops.push_back({i + 1, j + 1});
    }
    cout << ops.size() << endl;
    for (auto &p : ops)
        cout << p.first << " " << p.second << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}