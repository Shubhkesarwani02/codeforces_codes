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

    if (n == 2)
    {
        cout << "yes" << endl;
        return;
    }

    map<int, int> mpp;
    for (auto num : nums)
    {
        mpp[num]++;
    }
    int m = mpp.size();
    if (m == 1)
    {
        cout << "yes" << endl;
        return;
    }
    if (m > 2)
    {
        cout << "no" << endl;
        return;
    }
    vi temp;
    if (m == 2)
    {
        for (auto it : mpp)
        {
            temp.pb(it.second);
        }
        int diff = abs(temp[0] - temp[1]);
        if (diff <= 1)
        {
            cout << "yes" << endl;
            return;
        }
        else
        {
            cout << "no" << endl;
            return;
        }
    }
}

signed main()
{
    // if len==2, good
    // b1+b2 = b2+b3, b1==b3...

    // case:len==2, return good;
    // case: count freq, if number of distinct elements>2, not good
    // case: if distinct elements==2, their freq diff should be <=1...
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
}