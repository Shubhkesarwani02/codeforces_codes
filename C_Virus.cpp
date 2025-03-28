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
    int n, m;
    cin >> n >> m;

    map<int, int> status;
    set<int> infected;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        status[x] = 0;
        infected.insert(x);
    }

    for (int i = 1; i <= n; i++)
    {
        if (status.find(i) == status.end())
        {
            status[i] = -1;
        }
    }

    while (true)
    {
        vector<int> to_protect;
        vector<int> newly_infected;

        for (int i : infected)
        {
            int left = (i == 1) ? n : i - 1;
            int right = (i == n) ? 1 : i + 1;

            if (status[left] == -1)
                to_protect.push_back(left);
            if (status[right] == -1)
                to_protect.push_back(right);
        }

        if (to_protect.empty())
            break;

        int house = to_protect[0];
        status[house] = 1;

        for (int i : infected)
        {
            int left = (i == 1) ? n : i - 1;
            int right = (i == n) ? 1 : i + 1;

            if (status[left] == -1)
            {
                newly_infected.push_back(left);
                status[left] = 0;
            }
            if (status[right] == -1)
            {
                newly_infected.push_back(right);
                status[right] = 0;
            }
        }

        infected.insert(newly_infected.begin(), newly_infected.end());
    }

    int final_infected = 0;
    for (auto it : status)
    {
        if (it.second == 0)
            final_infected++;
    }

    cout << final_infected << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
