#include <bits/stdc++.h>
using namespace std;
#define int long long
int ceil_div(int a, int b)
{
    return (a + b - 1) / b;
}

void helper()
{
    int n, k;
    cin >> n >> k;

    int ans = 0;
    if (n % 2 == 0)
    {
        ans = ceil_div(n, k - 1);
    }
    else
    {
        ans = 1 + ceil_div(n - k, k - 1);
    }
    cout << ans << endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
