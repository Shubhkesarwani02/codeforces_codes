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
    vi b(n);
    input(b);

    vi a;
    for (int i = 1; i < n; i++)
    {
        if (b[i - 1] <= b[i])
            a.pb(b[i - 1]);
        else
        {
            a.pb(b[i - 1]);
            a.pb(b[i]);
        }
    }
    a.pb(b[n - 1]);
    //cout<<"output: ";
    cout << a.size() << endl;
    output(a);
    cout<<endl;
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