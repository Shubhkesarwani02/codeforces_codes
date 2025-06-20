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
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 1)
        {
            cout << 1 << endl;
            return;
        }
     
        int cnt = 1;
        int maxi = 1;
        rep(i, 1, n - 1)
        {
            if (s[i] == s[i - 1])
            {
                cnt++;
                maxi = max(maxi, cnt);
            }
            else
                cnt = 1;
        }
        cout << cnt + 1 << endl;
    }
     
    signed main()
    {
        int t;
        cin >> t;
        while (t--)
            helper();
        return 0;
    }