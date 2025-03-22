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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int cnt = 0;

    if (b > d)
    {
        cout << -1 << endl;
        return;
    }
    else
    { // b<=d
        if (b == d)
        {
            if (a == c)
            {
                cout << 0 << endl;
                return;
            }
            else
            {
                if (a < c)
                {
                    cout << -1 << endl;
                    return;
                }
                else
                {
                    cout << abs(c - a) << endl;
                    return;
                }
            }
        }
        else
        { // b<d
            cnt += abs(d - b);
            a += abs(d - b);
            b += abs(d - b);

            if (a == c)
            {
                cout << cnt << endl;
                return;
            }
            else if (a < c)
            {
                cout << -1 << endl;
                return;
            }
            else
            {
                cnt += abs(a - c);
                cout << cnt << endl;
                return;
            }
        }
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