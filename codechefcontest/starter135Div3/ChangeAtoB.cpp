#include <iostream>
using namespace std;

long long solve(long long a, long long b, long long k) {
    int count=0;
    while(true){
        if(b/k>=a && b%k==0){
            count++;
            b/=k;
        }
        else if(b%k==0){
            count+=(b-a);
            break;
        }
        else{
            count+=(b%k);
            b-=(b%k);
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        long long s = solve(a, b, k);
        cout << s << endl;
    }
    return 0;
}