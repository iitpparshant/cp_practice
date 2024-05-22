#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool check(string &str, string &ans, char p, char n, bool &flag)
{
    int size = str.size();
    int b = 0;
    for (char c : str)
    {
        if (c == p)
        {
            b++;
        }
        else if (c == n)
        {
            b--;
        }
    }
    if (b % 2 != 0)
    {
        return false;
    }
    if (b < 0)
    {
        swap(p, n);
        b *= -1;
    }
    int t = b / 2;
    for (int i = 0; i < size; i++)
    {
        if (str[i] != p && str[i] != n)
        {
            continue;
        }
        if (str[i] == p && t)
        {
            ans[i] = 'R';
            t--;
        }
        else
        {
            ans[i] = 'H';
        }
    }
    if (!flag && b == 0)
    {
        int fp = -1, fn = -1;
        // cout<<size;
        for (int i = 0; i < size; i++)
        {
            if (str[i] == p && fp == -1)
            {
                fp = i;
                ans[i] = 'R';
            }
            if (str[i] == n && fn == -1)
            {
                fn = i;
                ans[i] = 'R';
            }
            // cout << str[i] << " " << ans[i] << " ";
        }
        if ((fp != -1 && fn != -1))
        {
            flag = true;
        }
    }
    else
    {
        flag = false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        if (str == "NS" || str == "SN" || str == "EW" || str == "WE")
        {
            cout << "NO";
        }
        else
        {
            string ans(n, '?');
            bool flag = 0;
            if (!check(str, ans, 'N', 'S', flag) || !check(str, ans, 'E', 'W', flag))
            {
                cout << "NO";
            }
            else
            {
                cout << ans;
            }
        }
        // cout << "************";
        cout << endl;
    }
    return 0;
}