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

void helper() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> ans(n);
    int small = 1, big = n;

    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == '<') {
            ans[i+1] = small++;
        } else {
            ans[i+1] = big--;
        }
    }
    ans[0] = small;  

    output(ans);
    cout<<endl;
}


signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
