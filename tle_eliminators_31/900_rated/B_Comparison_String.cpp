    #include <bits/stdc++.h>
    #define ll long long
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
        int n;
        cin >> n;
        string s;
        cin >> s;
     
        int max_streak = 0;
        int curr_streak = 0;
     
        if (n == 1)
        {
            cout << 2 << endl;
            return;
        }
     
        for (int i = 0; i < n; ++i)
        {
            if (i == 0 || s[i] != s[i - 1])
            {
                curr_streak = 1;
            }
            else
            {
                curr_streak++;
            }
     
            max_streak = max(max_streak, curr_streak);
        }
     
        cout << max_streak + 1 << endl;
    }
     
    signed main()
    {
        int t;
        cin >> t;
        while (t--)
            helper();
        return 0;
    }