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

bool good(int n)
{
    while (n > 0)
    {
        if (n % 10 == 7)
            return true;
        n /= 10;
    }
    return false;
}
void helper()
{
    int n;
    cin >> n;

    int ans = 10; // max steps can be 9 only
    int cnt = 0;
    for (int i = 9; i < 100000000000; i = i * 10 + 9)
    {
        cnt = 0;
        int m = n;
        while (!good(m))
        {
            cnt++;
            m = m + i;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
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