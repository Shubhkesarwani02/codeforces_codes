#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define input(v) for(auto &i : v) cin >> i
#define output(v) for(auto &i : v) cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()
#define sum(a) a.begin(), a.end(), 0
using namespace std;
void helper()
{
    int n, k;
    cin >> n >> k;
    if(n == 2)
    {
        cout << 2 << " " << 1 << endl;
        return;
    }
    if(k % 2 == 1)
    {
        for(int i = 1; i <= n - 2; i++)
            cout << n << " ";
        cout << n << " " << n - 1 << endl;
    }
    else
    {
        for(int i = 1; i <= n - 2; i++)
            cout << n - 1 << " ";
        cout << n << " " << n - 1 << endl;
    }
}
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        helper();
    }
}
