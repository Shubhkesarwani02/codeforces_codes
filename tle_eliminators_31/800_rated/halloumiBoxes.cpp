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

void helper() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    for (int &x : a) cin >> x;

    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    if (k > 1 || a == sorted_a) 
        cout << "YES\n";
    else 
        cout << "NO\n";
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