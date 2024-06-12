#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>  // For memset
using namespace std;

const long long MAX_LIMIT = 100000;
vector<long long> sieve() {
    vector<long long> pm;
    vector<bool> isPm(MAX_LIMIT + 1, true);
    isPm[0] = isPm[1] = false;
    for (long long i = 2; i <= MAX_LIMIT; ++i) {
        if (isPm[i]) {
            pm.push_back(i);
            for (long long j = i * i; j <= MAX_LIMIT; j += i) {
                isPm[j] = false;
            }
        }
    }
    return pm;
}

bool is(long long N, const vector<long long>& primes) {
    int size = primes.size();
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            long long target = N - primes[i] * primes[i] - primes[j] * primes[j];
            if (target <= 0) break; 
            auto it = lower_bound(primes.begin(), primes.end(), sqrt(target));
            if (it != primes.end() && *it == sqrt(target)) {
                long long pk = *it;
                if (pk != primes[i] && pk != primes[j]) return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
     vector<long long> isp = sieve();
    while (t--) {
        long long n;
        cin >> n;
        if (n % 2 != 0) {
            cout << "NO" << endl; 
            continue;
        }
        
        if (is(n, isp)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
