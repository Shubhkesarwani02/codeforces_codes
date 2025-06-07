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

void countPrimeFactors(int num, map<int, int> &factorMap)
{
    while (num % 2 == 0)
    {
        factorMap[2]++;
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2)
    {
        while (num % i == 0)
        {
            factorMap[i]++;
            num /= i;
        }
    }

    if (num > 2)
    {
        factorMap[num]++;
    }
}

void helper()
{
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    map<int, int> factorMap;
    for (auto num : nums)
    {
        countPrimeFactors(num, factorMap);
    }
    // we just moving the prime factor of one into another...
    for (auto it : factorMap)
    {
        if (it.second % n != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
