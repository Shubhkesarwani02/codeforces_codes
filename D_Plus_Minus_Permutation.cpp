#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define input(v)         \
    for (auto &i : v) \
        cin >> i
#define output(v)        \
    for (auto &i : v) \
        cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()
#define rep(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

// Function to find the Greatest Common Divisor (GCD) using Euclidean algorithm
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the Least Common Multiple (LCM)
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) {
        return 0; // LCM is 0 if either number is 0
    }
    return (a / gcd(a, b)) * b; // Avoid potential overflow by dividing first
}

void helper() {
    int n, x, y;
    cin >> n >> x >> y;

    if (x == y) {
        cout << 0 << endl;
        return;
    }

    int common = n / lcm(x, y);
    int onlyX = n / x - common;
    int onlyY = n / y - common;

    int sumX = (n * (n + 1) / 2) - ((n - onlyX) * (n - onlyX + 1) / 2);
    int sumY = (onlyY * (onlyY + 1) / 2);

    cout << sumX - sumY << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}