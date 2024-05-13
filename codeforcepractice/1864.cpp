#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int j = 0;
        int y = 0;
        vector<int> ans;
        ans.push_back(x);
        while (true)
        {
            if ((x & (1 << j)) !=0)
            {
                // cout << x << " " << (1 << j) << "**//*/";
                if (x == (1 << j))
                {
                    y = j;
                    break;
                }
                x -= (1 << j);
                ans.push_back(x);
            }
            j++;
        }
        while (y--)
        {
            x -= (1 << (y));
            ans.push_back(x);
            // y--;
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}