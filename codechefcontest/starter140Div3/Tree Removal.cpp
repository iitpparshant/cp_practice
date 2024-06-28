#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n + 1);
        a[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        vector<vector<long long>> adj(n + 1);
        vector<long long> in(n + 1, 0);
        for (int i = 0; i < n - 1; i++) {
            long long x, y;
            cin >> x >> y;
            in[x]++;
            in[y]++;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        priority_queue<pair<long long, long long>> pq;
        for (int i = 1; i <= n; i++) {
            if (in[i] ==1) {
                pq.push({a[i], i});
            }
        }
        
        vector<long long> ans;
        while (!pq.empty()) {
            auto [value, node] = pq.top();
            pq.pop();
            if (in[node] % 2 == 1) {
                ans.push_back(node);
                for (auto it : adj[node]) {
                    if (in[it] > 0) {
                        in[it]--;
                        if (in[it] == 1) {
                            pq.push({a[it], it});
                        }
                    }
                }
                in[node] = 0;
            }
        }
        
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
