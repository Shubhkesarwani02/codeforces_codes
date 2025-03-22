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
    // assign the zero and one to the alternate of char of s, wherever voilates, return n-i;
    string s;
    cin >> s;

    int n = s.length();

    int c0 = 0;
    int c1 = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            c0++;
        else
            c1++;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            c1--;
            if (c1 < 0)
            {
                ans = n - i;
                break;
            }
        }
        else
        {
            c0--;
            if (c0 < 0)
            {
                ans = n - i;
                break;
            }
        }
    }
    cout << ans << endl;
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