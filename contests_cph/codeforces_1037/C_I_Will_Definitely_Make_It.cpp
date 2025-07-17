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

void helper() {
    int n, k;
    cin >> n >> k;

    vi h(n);
    input(h);
    k--;

    int Hmax = *max_element(all(h));
    set<pii> alive;
    rep(i, 0, n - 1) alive.insert({h[i], i});
    alive.erase({h[k], k});
    
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, k});
    bool ok = false;
    while (!pq.empty()) {
        auto top = pq.top(); pq.pop();
        int T = top.first, i = top.second;
        if (h[i] == Hmax) { ok = true; break; }
        if (T > h[i]) continue;
        int L1 = T;
        int L2 = (h[i] + T + 2) / 2;
        int L = max(L1, L2);
        int U = 2 * h[i] - T;
        if (L > U) continue;
        while (true) {
            auto it = alive.lower_bound({L, -1});
            if (it == alive.end() || it->first > U) break;
            int hj = it->first, j = it->second;
            alive.erase(it);
            int d = llabs(h[i] - hj);
            pq.push({T + d, j});
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
}

signed main() {

    int t;
    cin >> t;
    while (t--) helper();
    return 0;
}
