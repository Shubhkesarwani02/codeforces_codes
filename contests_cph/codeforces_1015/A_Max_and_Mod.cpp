#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define input(v) for (auto &i : v) cin >> i
#define output(v) for (auto &i : v) cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()
#define rep(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

void helper()
{
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << -1 << endl;
        return;
    }
    vi perm;
    perm.pb(n);
    for (int i = 1; i < n; i++){
        perm.pb(i);
    }
    output(perm);
    cout << endl;
}

signed main()
{
    int t;
    cin >> t;
    while(t--)
        helper();
    return 0;
}
