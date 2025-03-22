#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int d = 0; // count of -1's
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(a == -1)
                d++;
        }
        
        int f = n / 2; // floor(n/2)
        
        int ans = 0;
        if(d <= f){
            // sum condition is already satisfied; we only need product condition (d even)
            if(d % 2 == 1)
                ans = 1;
            else
                ans = 0;
        } else {
            // d > f: we need to reduce d.
            // target T is the largest even number <= f.
            int T;
            if(f % 2 == 0)
                T = f;
            else
                T = f - 1;
            ans = d - T;
        }
        cout << ans << "\n";
    }
    return 0;
}
