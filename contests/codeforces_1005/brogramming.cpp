#include <iostream>
#include <string>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    if (s[0] == '1')
        cnt++;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            cnt++;
    }
    cout << cnt << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
