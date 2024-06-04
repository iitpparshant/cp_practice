#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int f, k, n;
    cin >> n >> f >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int ele = a[f - 1];
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    if (k == n)
    {
      cout << "YES";
    }
    else if (a[k] == ele && a[k - 1] == ele)
    {
      cout << "MAYBE";
    }
    else
    {
      bool flag = false;
      for (int i = k; i < n; i++)
      {
        if (a[i] == ele)
        {
          flag = true;
        }
      }
      if (flag == true)
      {
        cout << "NO";
      }
      else
      {
        cout << "YES";
      }
    }
    cout << endl;
  }
  return 0;
}