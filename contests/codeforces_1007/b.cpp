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
#define sum(a) accumulate(a.begin(), a.end(), 0)

using namespace std;

bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return s * s == x;
}

void helper()
{
    int n;
    cin >> n;
    int totalSum = (n * (n + 1)) / 2;

    if (isPerfectSquare(totalSum))
    {
        cout << "-1" << endl;
        return;
    }

    set<int, greater<int>> st;
    for (int i = 1; i <= n; i++)
        st.insert(i);

    vi ans;
    int prefixSum = 0;

    while (!st.empty())
    {
        for (auto it = st.begin(); it != st.end(); ++it)
        {
            if (!isPerfectSquare(prefixSum + *it))
            {
                ans.pb(*it);
                prefixSum += *it;
                st.erase(it);
                break;
            }
        }
    }

    output(ans);
    cout << endl;
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
