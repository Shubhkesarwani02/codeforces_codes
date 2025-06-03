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
    int n;
    cin >> n;
    vector<pii> pts(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pts[i].first >> pts[i].second;
    }
    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    const int INF = LLONG_MAX / 4;
    int min_x = INF, max_x = -INF, min_y = INF, max_y = -INF;
    int min2_x = INF, max2_x = -INF, min2_y = INF, max2_y = -INF;
    int cnt_min_x = 0, cnt_max_x = 0, cnt_min_y = 0, cnt_max_y = 0;
    for (auto &p : pts)
    {
        int x = p.first, y = p.second;
        if (x < min_x)
        {
            min2_x = min_x;
            cnt_min_x = 1;
            min_x = x;
        }
        else if (x == min_x)
        {
            cnt_min_x++;
        }
        else if (x < min2_x)
        {
            min2_x = x;
        }
        if (x > max_x)
        {
            max2_x = max_x;
            cnt_max_x = 1;
            max_x = x;
        }
        else if (x == max_x)
        {
            cnt_max_x++;
        }
        else if (x > max2_x)
        {
            max2_x = x;
        }
        if (y < min_y)
        {
            min2_y = min_y;
            cnt_min_y = 1;
            min_y = y;
        }
        else if (y == min_y)
        {
            cnt_min_y++;
        }
        else if (y < min2_y)
        {
            min2_y = y;
        }
        if (y > max_y)
        {
            max2_y = max_y;
            cnt_max_y = 1;
            max_y = y;
        }
        else if (y == max_y)
        {
            cnt_max_y++;
        }
        else if (y > max2_y)
        {
            max2_y = y;
        }
    }
    auto other_ext = [&](int x, int y)
    {
        int ox_min = (x > min_x ? min_x : (cnt_min_x > 1 ? min_x : min2_x));
        int ox_max = (x < max_x ? max_x : (cnt_max_x > 1 ? max_x : max2_x));
        int oy_min = (y > min_y ? min_y : (cnt_min_y > 1 ? min_y : min2_y));
        int oy_max = (y < max_y ? max_y : (cnt_max_y > 1 ? max_y : max2_y));
        return tuple<int, int, int, int>(ox_min, ox_max, oy_min, oy_max);
    };
    int dx_all = max_x - min_x + 1;
    int dy_all = max_y - min_y + 1;
    int best = dx_all * dy_all;
    for (auto &p : pts)
    {
        int x = p.first, y = p.second;
        if (x == min_x || x == max_x || y == min_y || y == max_y)
        {
            int ox_min, ox_max, oy_min, oy_max;
            tie(ox_min, ox_max, oy_min, oy_max) = other_ext(x, y);
            int dx = ox_max - ox_min + 1;
            int dy = oy_max - oy_min + 1;
            int A = dx * dy;
            if (A == n - 1)
                A += min(dx, dy);
            best = min(best, A);
        }
    }
    cout << best << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
