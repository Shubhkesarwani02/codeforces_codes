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

    if (n < 10)
    {
        //cout << "ans: ";
        cout << n << endl;
        return;
    }
    map<int, int> mpp;
    int x = 0;
    for (int num = 10; num < 1000000; num *= 10)
    {
        mpp[num] = 10 + 9 * x;
        x++;
    }
    int cnt = 0;

    if (n >= 10 && n < 100)
        cnt = mpp[10] + n / 10 - 1;
    else if (n >= 100 && n < 1000)
        cnt = mpp[100] + n / 100 - 1;
    else if (n >= 1000 && n < 10000)
        cnt = mpp[1000] + n / 1000 - 1;
    else if (n >= 10000 && n < 100000)
        cnt = mpp[10000] + n / 10000 - 1;
    else if (n >= 100000 && n < 1000000)
        cnt = mpp[100000] + n / 100000 - 1;

    //cout<<"ans: ";
    cout << cnt << endl;
    return;
}

signed main()
{
    // <10, n;

    // m[10] = 10;
    // n = m[10]+ n/10 -1; [10, 100)

    // m[100] = 19;
    // n = m[100]+ n/100 - 1;

    // m[1000] = 28;
    // n = m[1000]+ n/1000 - 1;
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
}