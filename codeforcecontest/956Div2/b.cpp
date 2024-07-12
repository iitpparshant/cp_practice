#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m));
        vector<vector<char>> b(n, vector<char>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> b[i][j];
            }
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                if (a[i][j] != b[i][j]) {
                    char x = b[i][j] - a[i][j];
                    a[i][j] = b[i][j];
                    a[i + 1][j + 1] = (a[i + 1][j + 1] - '0' + x + 3) % 3 + '0';
                    a[i + 1][j] = (a[i + 1][j] - '0' - x + 3) % 3 + '0';
                    a[i][j + 1] = (a[i][j + 1] - '0' - x + 3) % 3 + '0';
                }
            }
        }

        bool flag = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] != b[i][j]) {
                    flag = false;
                    break;
                }
            }
            if (!flag) break;
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
