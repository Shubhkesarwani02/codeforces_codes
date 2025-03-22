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
    // using pq, store index, element
    // check the two elements and if the parity is same, pop them and replace the element with max index, product...
    /// else pop the above ele

    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push({i, nums[i]});
    }
    int cnt = 0;
    while (!pq.empty())
    {
        if (pq.size() == 1)
            break;
        auto one = pq.top();
        int a = one.second;
        pq.pop();
        auto two = pq.top();
        int b = two.second;
        pq.pop();

        if (a & 1 && b & 1 || a % 2 == 0 && b % 2 == 0)
        {
            pq.push({two.first, a * b});
            cnt++;
        }
        else
        {
            pq.push({two.first, two.second});
        }
    }
    cout << cnt << endl;
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