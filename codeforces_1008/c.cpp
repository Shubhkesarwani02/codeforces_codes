#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    // put first half ele into bag1 and put second half into bag2, excluding low and high!
    // the diff will be s = sum(b2) - sum(b1), now we are putting low and high into bag2,
    // then bag2 has n+1 elements, and bag1 has n-1 elements , the miss num = s + low+high.
    // which will always be greater than all ele or can say a unique one..
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n * 2);
        for (int i = 0; i < n * 2; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int s = 0;
        vector<int> g;
        for (int i = 1; i < n; i++)
        {
            g.push_back(a[i]);
            g.push_back(a[i + n - 1]);
            s += a[i + n - 1] - a[i];
        }
        g.push_back(s + a[n * 2 - 1] + a[0]);
        g.push_back(a[0]);
        cout << a[n * 2 - 1];
        for (int i = 0; i < n * 2; i++)
            cout << ' ' << g[i];
        cout << endl;
    }
}