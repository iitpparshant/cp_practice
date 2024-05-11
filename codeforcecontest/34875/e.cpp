#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        int a[k + 1], b[k + 1];
        a[0] = 0, b[0] = 0;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        for (int j = 1; j <= k; j++)
        {
            cin >> b[j];
        }
        vector<int> dist;
        dist.push_back(0);
        for (int i = 1; i <= k; i++)
        {
            // cout<<a[i-1]+1<<" "<<a[i];
            int k=0;
            for (int j = a[i - 1] + 1; j <= a[i]; j++)
            {
                // cout<<"skjf";
                //  cout<<b[j-1]+1<<" "<<b[j]<<" ";
                dist.push_back((b[i] - b[i - 1]) * (k + 1) / (a[i] - a[i - 1]));
                k++;
            }
        }
        while (q--)
        {
            int d;
            cin >> d;
            cout<<dist[d]<<"****"<<endl;
        }
    }
    return 0;
}