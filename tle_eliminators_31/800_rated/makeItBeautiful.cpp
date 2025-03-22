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
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    bool eq = true;
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] != nums[i])
        {
            eq = false;
            break;
        }
    }
    if (eq)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        vi temp;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            temp.pb(nums[i++]); // Push smallest element
            if (i <= j)
                temp.pb(nums[j--]); // Push largest element
        }
        output(temp);
        cout << endl;
    }
}

signed main()
{
    //if the ele are all equal, it is impossible...
    //else it is always possible to make it beautiful...
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
}