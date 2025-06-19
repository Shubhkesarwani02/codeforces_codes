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

void getKnightAttackers(int x, int y, int a, int b, map<pair<int, int>, int> &mpp)
{
    vector<pair<int, int>> raw = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };
    set<pair<int,int>> moves(raw.begin(), raw.end());
    for (auto it = moves.begin(); it != moves.end(); ++it) {
        int dx = it->first;
        int dy = it->second;
        mpp[{x - dx, y - dy}]++;
    }
}


void helper()
{
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;

    int cnt = 0;
    map<pair<int, int>, int> mpp;

    getKnightAttackers(xk, yk, a, b, mpp);
    getKnightAttackers(xq, yq, a, b, mpp);
    
    for (auto it : mpp)
    {
        if (it.second == 2)
            cnt++;
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
