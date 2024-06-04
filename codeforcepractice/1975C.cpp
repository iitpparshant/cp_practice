#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        long long mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 2)
        {
            mx = min(a[0], a[1]);
        }
        else
        {

            for (int i = 0; i < n - 2; i++)
            {
                vector<long long>temp;
                for(int j=0;j<=2;j++){
                    temp.push_back(a[i+j]);
                }
                sort(temp.begin(),temp.end());
                mx = max(mx, temp[1]);
            }
        }
        cout << mx << endl;
    }
    return 0;
}