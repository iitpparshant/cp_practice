#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        vector<int> ans(31, 0);
        for (int i = 0; i < 30; i++)
        {
            if (1ll & (x >> i))
            {
                if (ans[i])
                {

                    ans[i + 1] = 1;
                    ans[i] = 0;
                }
                else if (i > 0)
                {
                    if (ans[i - 1] == 1)
                    {
                        ans[i + 1] = 1;
                        ans[i - 1] = -1;
                    }
                    else
                    {
                        ans[i] = 1;
                    }
                }
                else if (i == 0)
                {
                    ans[i] = 1;
                }
            }
        }
        cout << 31 << endl;
        for (int i = 0; i <= 30; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}