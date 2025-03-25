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

int findContrast(vector<int> &arr)
{
    if (arr.size() < 2)
        return 0;

    int contrast = 0;
    for (int i = 0; i < arr.size() - 1; ++i)
    {
        contrast += abs(arr[i] - arr[i + 1]);
    }
    return contrast;
}

void helper()
{
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    int cont = findContrast(nums);
    if (cont == 0)
    {
        cout << 1 << endl;
        return;
    }
    map<pii, int> m1;
    map<pii, int> m2;

    rep(i, 0, n - 2)
    {
        m1[{nums[i], nums[i + 1]}] = abs(nums[i] - nums[i + 1]);
    }
    for (int i = n - 1; i > 0; i--)
    {
        m2[{nums[i], nums[i - 1]}] = abs(nums[i] - nums[i - 1]);
    }

    for(auto it1: m1){
        for(auto it2: m2){
            if(it1.second + it2.second == cont){
                int f1 = it1.first.first;
                int f2 = it2.first.first;
                int l1 = it1.first.second;
                int l2 = it2.first.second;

                //can we find the min len from here?
                
            }
        }
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
