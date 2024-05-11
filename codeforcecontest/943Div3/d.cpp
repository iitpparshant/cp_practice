#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, pb, ps;
        cin >> n >> k >> pb >> ps;
        long long p[n], a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> vis(n, 0);
        vis[pb - 1] = 1;
        vector<long long> path;
        vector<long long> s;
        while (true)
        {
            path.push_back(a[pb - 1]);
            pb = p[pb - 1];
            if (vis[pb - 1] == 1)
            {
                break;
            }
        }
        vis = vector<long long>(n, 0);
        vis[ps - 1] = 1;
        while (true)
        {
            s.push_back(a[ps - 1]);
            ps = p[ps - 1];
            if (vis[ps - 1]==1)
            {
                break;
            }
        }
        long long bs = 0, ss = 0;
        long long sum = 0;
        for (int i = 0; i < path.size(); i++)
        {
            if (k < i + 1)
            {
                break;
            }
            long long curr = sum + (path[i] * (k - i));
            bs = max(bs, curr);
            sum += path[i];
        }
        sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (k < i + 1)
            {
                break;
            }
            long long curr = sum + (s[i] * (k - i));
            ss = max(ss, curr);
            sum+=s[i];
        }
        if (bs > ss)
        {
            cout << "Bodya" << endl; 
        }
        else if (ss > bs)
        {
            cout << "Sasha" << endl;
        }
        else
        {
            cout << "Draw " << endl;
        }
    }
    return 0;
}