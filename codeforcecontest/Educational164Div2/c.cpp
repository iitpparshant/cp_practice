#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<vector<int>> dp(n, vector<int>(2, INT_MIN));
        dp[0][0] = a[0];
        dp[0][1] = b[0];

        for (int i = 1; i < n; i++) {
             
            dp[i][0] = max(a[i], dp[i-1][0] + a[i]);
            dp[i][1] = max(b[i], dp[i-1][1] + b[i]);
        }

        int ans = max(dp[n-1][0], dp[n-1][1]);
        cout << ans << "##### ";
    }
    return 0;
}
