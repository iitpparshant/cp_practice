#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Maps to store the triplet information
        map<pair<int, int>, map<int, int>> m1, m2, m3;

        // Fill the maps with triplet counts
        for (int i = 0; i < n - 2; i++) {
            m1[{a[i], a[i + 1]}][a[i + 2]]++;
            m2[{a[i], a[i + 2]}][a[i + 1]]++;
            m3[{a[i + 1], a[i + 2]}][a[i]]++;
        }

        long long ans = 0;

        // Lambda function to count the valid triplets
        auto countTriplets = [](map<pair<int, int>, map<int, int>> &m) -> long long {
            long long total = 0;
            for (auto &it : m) {
                map<int, int> &inner_map = it.second;
                long long t = 0, ic = 0;
                for (auto &entry : inner_map) {
                    t += entry.second;
                    ic += (static_cast<long long>(entry.second) * (entry.second - 1)) / 2;
                }
                total += (t * (t - 1)) / 2 - ic;
            }
            return total;
        };

        // Count triplets from all maps
        ans += countTriplets(m1);
        ans += countTriplets(m2);
        ans += countTriplets(m3);

        // Output the result
        cout << ans << endl;
    }
    return 0;
}
