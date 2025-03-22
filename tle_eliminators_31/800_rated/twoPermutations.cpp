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
    int n, a, b;
    cin >> n >> a >> b;

    // since we have to check , left = n-a-b >=2
    // ie. n>=a+b+2 orr a=b=c, for positive...

    if (n >= (a + b + 2) || (a == b && b == n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return;
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