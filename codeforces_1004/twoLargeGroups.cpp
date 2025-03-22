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

    vi a(n);
    input(a);

    map<int, int> mpp; // storing the frequency
    set<int> st;       // for taking unique val of the arr

    for (int i = 0; i < n; i++)
    {
        mpp[a[i]]++;
        st.insert(a[i]);
    }

    while (!st.empty())
    {
        int ele = *st.begin();
        if (mpp[ele] == 1)
        {
            cout << "NO" << endl;
            return;
        }
        mpp[ele + 1] += mpp[ele] - 2;
        st.erase(ele);
        if (mpp[ele + 1])
        {
            st.insert(ele + 1);
        }
        mpp[ele] = 0;
    }
    cout<<"YES"<<endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}